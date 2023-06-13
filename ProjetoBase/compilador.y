
// Testar se funciona corretamente o empilhamento de par�metros
// passados por valor ou por refer�ncia.


%{
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "compilador.h"
#include "tabela_simb/tabela_simb.h"
#include "tabela_simb/simbolo.h"
#include "gerador_rotulos/gerador_rotulos.h"


int num_vars;
char mepa_buf[128];
int nivel_lexico;
int num_carrega_tipo;
struct cat_conteudo cc;
struct tab_simb *tabela;
struct simbolo s;
struct simbolo *ps;
struct simbolo *esquerdo;
int num_vars_por_nivel[10];
struct pilha_rotulos *p_rotulos;
struct rotulo rotulo_a;


enum tipo_dado{
    t_int,
    t_bool
};


%}

%token PROGRAM ABRE_PARENTESES FECHA_PARENTESES
%token VIRGULA PONTO_E_VIRGULA DOIS_PONTOS PONTO
%token T_BEGIN T_END VAR IDENT ATRIBUICAO
%token LABEL TYPE PROCEDURE FUNCTION
%token GOTO IF THEN ELSE WHILE DO
%token ARRAY OF ABRE_CONCHETES FECHA_CONCHETES
%token DIV AND NOT OR TIPO VALOR_BOOL NUMERO
%token MAIOR MENOR IGUAL MENOR_IGUAL MAIOR_IGUAL DIFERENTE
%token MAIS MENOS VEZES
%token READ WRITE

%union{
   char * str;  // define o tipo str
   int int_val; // define o tipo int_val
   struct simbolo *simb;
}

%type <str> relacao;
%type <int_val> fator;
%type <int_val> termo;
%type <int_val> expressao_simples;
%type <int_val> expressao;


%nonassoc ELSE
%nonassoc "lower_then_else"

%%


/* REGRAS QUE DEVEM SER IMPLEMNTADAS
1\2\8\9\10\11\12\13\14\16\17\18\19\20\23\22\25
\26\27\28\29\30
*/

// =========== REGRA 1 ============= //
programa    :{
             geraCodigo (NULL, "INPP");
             tabela = inicializa();
             p_rotulos = inicializa_rotulos();
             nivel_lexico = 0;
             }
             PROGRAM IDENT
             ABRE_PARENTESES input_idents FECHA_PARENTESES PONTO_E_VIRGULA
             bloco PONTO {
             sprintf (mepa_buf, "DMEM %d", num_vars_por_nivel[0]);
             geraCodigo (NULL, mepa_buf);
             geraCodigo (NULL, "PARA");
             }
;


input_idents: IDENT VIRGULA IDENT
;

// =========== REGRA 2 ============= //
bloco       :
            parte_declara_vars
            {
            printf("COISA DE TESTE \n");
            rotulo_a = gerarrotulo(&p_rotulos);
            sprintf(mepa_buf, "DSVS %s", rotulo_a.rotulo);
            geraCodigo (NULL, mepa_buf);
            }
            parte_declara_sub_rotinas
            {
            rotulo_a = pegarrotulo(&p_rotulos);
            geraCodigo (rotulo_a.rotulo, "NADA");
            }
            comando_composto
            {
            }
;



// =========== REGRA 8 ============= //
parte_declara_vars: {num_vars = 0;

                  }
					VAR declaracao_de_vars {
					   sprintf(mepa_buf, "AMEM %d", num_vars);
					   geraCodigo(NULL,mepa_buf);
					   }


               |
;

// =========== REGRA 9 ============= //
declaracao_de_vars: declaracao_de_vars declaracao_de_var 
                  | declaracao_de_var

declaracao_de_var: {
                     num_carrega_tipo = 0;
                  }
                   lista_idents DOIS_PONTOS tipo PONTO_E_VIRGULA

;

tipo        : TIPO {
                     if (!strcmp(token, "integer"))
                        coloca_tipo(&tabela, pas_integer, num_carrega_tipo);
                     else if (!strcmp(token, "boolean"))
                        coloca_tipo(&tabela, pas_boolean, num_carrega_tipo);
                     else
                        perror("TIPO ERRADO, CORRIGE, TA ERRADO");
                     }
;


// =========== REGRA 10 ============= //
lista_idents: lista_idents VIRGULA IDENT {
               cc.var.deslocamento = num_vars;
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
            | IDENT {
               cc.var.deslocamento = num_vars;
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
;

// =========== REGRA 16 ============= //
comando_composto: T_BEGIN comandos T_END
;

parte_declara_sub_rotinas:
                           parte_declara_sub_rotinas declara_procedimento
                           | parte_declara_sub_rotinas declara_function 
                           |
;

declara_procedimento:
                     PROCEDURE IDENT ABRE_PARENTESES lista_paramentro_formais FECHA_PARENTESES PONTO_E_VIRGULA bloco PONTO_E_VIRGULA
                     | PROCEDURE IDENT PONTO_E_VIRGULA bloco PONTO_E_VIRGULA
;

declara_function:
               FUNCTION IDENT ABRE_PARENTESES lista_paramentro_formais FECHA_PARENTESES DOIS_PONTOS TIPO PONTO_E_VIRGULA bloco PONTO_E_VIRGULA
               | FUNCTION IDENT DOIS_PONTOS TIPO PONTO_E_VIRGULA bloco PONTO_E_VIRGULA
; 


lista_paramentro_formais:
                        lista_paramentro_formais VIRGULA parametro
                        | parametro
;

parametro:
         VAR IDENT DOIS_PONTOS TIPO
         |  IDENT DOIS_PONTOS TIPO
;

// =========== REGRA 17 ============= //
comandos: 
         comandos PONTO_E_VIRGULA comando 
         | comando 
         |
;

// =========== REGRA 18 ============= //
comando: 
         atribui {
         //| chamada_de_procedimento
         }| comando_composto
         | comando_condicional
         | comando_repetitivo
         | leitura
         | escrita
; 
         
 
// =========== REGRA 19 ============= //
atribui:
         IDENT {
            if((esquerdo = busca(&tabela, token)) == NULL){
               printf("ERRO: identificador nao encontrado/nao declarado");
            }
         }
         atribui_contiunuacao
;

atribui_contiunuacao:
                  ATRIBUICAO expressao{
                     if($2 == pas_integer){
                        sprintf(mepa_buf, "ARMZ %d, %d",esquerdo->nivel , esquerdo->conteudo.var.deslocamento );
                        geraCodigo(NULL, mepa_buf);
                     }else{
                        printf ("erro: expresao entre tipos incompativeis \n");
                        exit(1);
                     }
                  }
;

// =========== REGRA 20 ============= //
chamada_de_procedimento:
;

// =========== REGRA 22 ============= //
comando_condicional:
                  IF expressao {
                     if($2 == pas_boolean){
                        rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                        sprintf(mepa_buf, "DSVF %s",rotulo_a.rotulo);
                        geraCodigo(NULL, mepa_buf);
                     }else{
                        exit(1);
                     }
                  }
                  THEN comando {
                     rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                     sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
                     geraCodigo(NULL, mepa_buf);
                     rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
                     geraCodigo (rotulo_a.rotulo, "NADA"); 
                  }
                  else_ou_nada{
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-1];
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                        remove_n(&p_rotulos, 2);
                  }
;

else_ou_nada: 
               ELSE comando
               | %prec "lower_then_else"
;                

// =========== REGRA 23 ============= //
comando_repetitivo:{
                        rotulo_a = gerarrotulo(&p_rotulos); //cria um rotulo mas esse e o proximo rotulo vai ser usado como fila e nao como pilha
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                     }
                     WHILE while_resto
;                     
while_resto:                     
                     expressao {
                        if($1 == pas_boolean){
                           rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                           sprintf(mepa_buf, "DSVF %s",rotulo_a.rotulo);
                           geraCodigo(NULL, mepa_buf);
                        }else{
                           exit(1);
                        }   
                     }
                     DO comando{
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
                        sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
                        geraCodigo(NULL, mepa_buf);
                        rotulo_a = p_rotulos->pilha[p_rotulos->topo-1];
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                        remove_n(&p_rotulos, 2);
                     }
;

// =========== REGRA 25 ============= //
expressao:
            expressao_simples relacao expressao_simples{
               geraCodigo(NULL, $2);
               if ($1 == $3)
                  $$ = pas_boolean;
               else{
                  printf ("erro: expresao entre tipos incompativeis \n");
                  exit(1);
               }
            }
            | expressao_simples {
               $$ = $1;
            }
;

// =========== REGRA 26 ============= //
relacao:
         IGUAL          { $$ = "CMIG"; }
         | MENOR        { $$ = "CMME"; }
         | MAIOR        { $$ = "CMMA"; }
         | MAIOR_IGUAL  { $$ = "CMAG"; }
         | MENOR_IGUAL  { $$ = "CMEG"; }
         | DIFERENTE    { $$ = "CMDG"; }
;

// =========== REGRA 27 ============= //
expressao_simples:
               termo {
                  $$ = $1;
               }
               | MAIS termo {
                  if ($2 == pas_integer)
                     $$ = $2;
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
               | MENOS termo {
                  geraCodigo(NULL, "INVR");
                  if ($2 == pas_integer)
                     $$ = $2;
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
               | expressao_simples MAIS termo  {
                  geraCodigo( NULL, "SOMA");
                  if ($1 == $3 && $1 == pas_integer)
                     $$ = $3;
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
               | expressao_simples MENOS termo {
                  geraCodigo( NULL, "SUBT");
                  if ($1 == $3 && $1 == pas_integer)
                     $$ = $3;
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
               | expressao_simples OR termo {
                  geraCodigo( NULL, "DISJ");
                  if ($1 == $3 && $1 == pas_boolean)
                     $$ = $3;
                  else{
                     printf ("erro: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
;

termo: 
      fator  {
         $$ = $1;
      }
      | termo DIV fator  {
         geraCodigo( NULL, "DIVI");
         if ($1 == $3 && $1 == pas_integer)
            $$ = $3;
         else{
            printf ("erro: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
      | termo VEZES fator  {
         geraCodigo( NULL, "MULT");
         if ($1 == $3 && $1 == pas_integer)
            $$ = $3;
         else{
            printf ("erro: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
      | termo AND fator  {
          geraCodigo( NULL, "CONJ");
          if ($1 == $3 && $1 == pas_boolean)
            $$ = $3;
          else{
            printf ("erro: expresao entre tipos incompativeis \n");
            exit(1);
          }
      }
;

fator:
      IDENT {
         printf("buscando token %s\n", token);
         if((ps = busca(&tabela, token)) != NULL){
            sprintf(mepa_buf, "CRVL %d, %d",ps->nivel , ps->conteudo.var.deslocamento );
            geraCodigo(NULL, mepa_buf);
            $$ = ps->conteudo.var.tipo;
         }else{
            printf("falha ao procurar token %s\n", token);
            exit(1);
         }
      }
      | NUMERO {
         sprintf (mepa_buf, "CRCT %d", atoi(token));
         geraCodigo(NULL, mepa_buf);
         $$ = pas_integer;
      //| chamada_de_funcao
      // $$ = tipo_retorno_funcao
      }
      | VALOR_BOOL {
         $$ = pas_boolean;
      }
      | ABRE_PARENTESES expressao_simples FECHA_PARENTESES{
         $$ = $2;
      }
      | NOT fator{
         if($2 == pas_boolean){
            geraCodigo(NULL, "NEGA");
            $$ = $2;
         }   
         else
            exit(1);   
      }
;

chamada_de_funcao:
                IDENT ABRE_PARENTESES lista_params FECHA_PARENTESES 
;

lista_params:;



// =========== LEITURA ============= //
leitura: 
         READ ABRE_PARENTESES parametros_de_leitura FECHA_PARENTESES
;

parametros_de_leitura:
                     parametros_de_leitura VIRGULA parametro_leitura
                        | parametro_leitura
;

parametro_leitura:
                  IDENT{
                     geraCodigo(NULL, "LEIT");
                     printf("buscando token %s\n", token);
                     if((ps = busca(&tabela, token)) != NULL){
                        sprintf(mepa_buf, "ARMZ %d, %d",ps->nivel , ps->conteudo.var.deslocamento );
                        geraCodigo(NULL, mepa_buf);
                     }else{
                        printf("falha ao procurar token %s\n", token);
                        exit(1);
                     }
                  }
;


// =========== ESCRITA ============= //
escrita: 
        WRITE ABRE_PARENTESES parametros_de_escrita FECHA_PARENTESES 
;

parametros_de_escrita:
                     parametros_de_escrita VIRGULA parametro_escrita
                        | parametro_escrita
;

parametro_escrita:
                  IDENT {
                     printf("buscando token %s\n", token);
                     if((ps = busca(&tabela, token)) != NULL){
                        sprintf(mepa_buf, "CRVL %d, %d",ps->nivel , ps->conteudo.var.deslocamento );
                        geraCodigo(NULL, mepa_buf);
                        geraCodigo(NULL, "IMPR");
                     }else{
                        printf("falha ao procurar token %s\n", token);
                        exit(1);
                     }
                  //| chamada_de_funcao{

                    // }
                  }
;



%%

int main (int argc, char** argv) {
   FILE* fp;
   extern FILE* yyin;

   if (argc<2 || argc>2) {
         printf("usage compilador <arq>a %d\n", argc);
         return(-1);
      }

   fp=fopen (argv[1], "r");
   if (fp == NULL) {
      printf("usage compilador <arq>b\n");
      return(-1);
   }


/* -------------------------------------------------------------------
 *  Inicia a Tabela de S�mbolos
 * ------------------------------------------------------------------- */



   yyin=fp;
   yyparse();

   imprime_tabela(&tabela);

   return 0;
}
