
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
struct simbolo s ,lista_simbolos[128];
struct parametro lista_parametros[128];
struct simbolo *ps;
struct simbolo *esquerdo;
int esquerdo_recursao_func = 0;
struct simbolo *esquerdo_func[100];
int num_vars_por_nivel[10];
struct pilha_rotulos *p_rotulos;
struct rotulo rotulo_a;
int num_params;
char proc_name[128];
struct cat_conteudo conteudo;
int pilha_num_vars[1000];
char pilha_proc_name[100][128];
int pilha_proc = 0;
int ponteiro_pilha_num_vars = 0;


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
%type <int_val> parametros_ou_nada;
%type <int_val> funcao_ou_ident;
%type <int_val> empilha_retorno;
%type <int_val> continua_atibui_ou_func;




%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

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
            //fprintf(stderr,"COISA DE TESTE \n");
            rotulo_a = gerarrotulo(&p_rotulos);
            sprintf(mepa_buf, "DSVS %s", rotulo_a.rotulo);
            geraCodigo (NULL, mepa_buf);
            nivel_lexico++;
            }
            parte_declara_sub_rotinas
            {
            nivel_lexico --;
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
                  ponteiro_pilha_num_vars++;
                  pilha_num_vars[ponteiro_pilha_num_vars] = num_vars;
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
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc, num_vars);
               adicionar(&tabela, s);
               num_carrega_tipo++;
               num_vars++;
               num_vars_por_nivel[nivel_lexico]++;
               }
            | IDENT {
               printf("adicionado token [%s]\n", token);
               s = cria_simbolo(token, variavel, nivel_lexico, cc, num_vars);
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
                     PROCEDURE IDENT {
                        strcpy(pilha_proc_name[pilha_proc], token);
                        pilha_proc++;
                        num_params = 0;
                     }
                     parametros_formais_ou_nada {
                        rotulo_a = gerarrotulo(&p_rotulos);
                        sprintf(mepa_buf, "ENPR %d", nivel_lexico);
                        geraCodigo(rotulo_a.rotulo, mepa_buf);

                        strcpy(conteudo.proc.rotulo, rotulo_a.rotulo);
                        conteudo.proc.qtd_parametros = num_params;
                     
                        memcpy(conteudo.proc.lista, lista_parametros, sizeof(struct parametro)*num_params);
                        
                        // for(int i = 0; i < num_params; ++i){
                        //    printf("proc.lista[%d] tem tipo %d e passado por %d \n", i, ti.proc.lista[i].tipo, ti.proc.lista[i].passagem);
                        // }
                        //printf("nome: %s nivel: %d desloca: %d\n",proc_name, nivel_lexico, deslocamento);

                        s = cria_simbolo(pilha_proc_name[pilha_proc-1], procedimento, nivel_lexico, conteudo, 0);

                        adicionar(&tabela, s);

                        // atribui o deslocamento correto e coloca na pilha os símbolos
                        //for(int i = num_params-1; i >= 0; --i){
                           //lista_simbolos[i].conteudo.param.deslocamento = -4 + (i - (num_params-1)); 
                           //printf(">>>>>>>>> Parametro %s tem deslocamento %d\n", lista_simbolos[i].identificador, lista_simbolos[i].conteudo.param.deslocamento);
                           //adicionar(&tabela, lista_simbolos[i]);
                        //}
                       // rot_num++; // para o desvio de procedures dentro dessa procedure
                        //pilha_int_empilhar(&pilha_amem, num_params);

                     } PONTO_E_VIRGULA {imprime_tabela(&tabela);} bloco{

                           sprintf(mepa_buf, "DMEM %d", pilha_num_vars[ponteiro_pilha_num_vars]);
                           geraCodigo(NULL, mepa_buf);
                           ponteiro_pilha_num_vars--;
                           sprintf(mepa_buf, "RTPR %d, %d", nivel_lexico, num_params);
                           geraCodigo(NULL, mepa_buf);
                           rotulo_a = pegarrotulo(&p_rotulos);
                           pilha_proc--;
                           remover_ate(&tabela,pilha_proc_name[pilha_proc]);


                           //falta remover os simbolos da tabela de simbolos
                     } PONTO_E_VIRGULA
;

parametros_formais_ou_nada:
               ABRE_PARENTESES {num_params = 0;} lista_params_formais FECHA_PARENTESES
               |
;

declara_function:
               FUNCTION IDENT {
                  strcpy(proc_name, token);
                  num_params = 0;
               } parametros_formais_ou_nada {
                  rotulo_a = gerarrotulo(&p_rotulos);
                  sprintf(mepa_buf, "ENPR %d", nivel_lexico);
                  geraCodigo(rotulo_a.rotulo, mepa_buf);

                  strcpy(conteudo.proc.rotulo, rotulo_a.rotulo);
                  conteudo.proc.qtd_parametros = num_params;

                  memcpy(conteudo.proc.lista, lista_parametros, sizeof(struct parametro)*num_params);
                        
                  // for(int i = 0; i < num_params; ++i){
                  //    printf("proc.lista[%d] tem tipo %d e passado por %d \n", i, ti.proc.lista[i].tipo, ti.proc.lista[i].passagem);
                  // }
                  //printf("nome: %s nivel: %d desloca: %d\n",proc_name, nivel_lexico, deslocamento);

                  s = cria_simbolo(proc_name, procedimento, nivel_lexico, conteudo, 0);

                  adicionar(&tabela, s);

                  // atribui o deslocamento correto e coloca na pilha os símbolos
                  for(int i = num_params-1; i >= -1; --i){
                     lista_simbolos[i].deslocamento = -4 + (i - (num_params-1)); 
                     printf(">>>>>>>>> Parametro %s tem deslocamento %d\n", lista_simbolos[i].identificador, lista_simbolos[i].deslocamento);
                     adicionar(&tabela, lista_simbolos[i]);
                  }
                  // rot_num++; // para o desvio de procedures dentro dessa procedure
                  //pilha_int_empilhar(&pilha_amem, num_params);
               } DOIS_PONTOS TIPO PONTO_E_VIRGULA bloco {
                  sprintf(mepa_buf, "RTPR %d, %d", nivel_lexico, 9999);
                  geraCodigo(NULL, mepa_buf);
               } PONTO_E_VIRGULA

; 

lista_params_formais:   
                        lista_params_formais VIRGULA parametro {num_params++;}
                        | parametro {num_params++;}
;

parametro:
         VAR IDENT {
            cc.param.passagem = parametro_ref;
            printf("adicionado token [%s]\n", token);
            s = cria_simbolo(token, parametro, nivel_lexico, cc, -4 - num_params);
         } DOIS_PONTOS TIPO {
            if (!strcmp(token, "integer"))
               s.conteudo.param.tipo = pas_integer;
            else if (!strcmp(token, "boolean"))
               s.conteudo.param.tipo = pas_boolean;
            else {
               //fprintf(stderr, "Tipo do parametro formal invalido\n");
               exit(1);
            }
            adicionar(&tabela, s);
         } 
         |  IDENT {
            cc.param.passagem = parametro_copia;
            printf("adicionado token [%s]\n", token);
            s = cria_simbolo(token, parametro, nivel_lexico, cc, -4 - num_params);
            printf("OI %d\n\n\n", num_params);
            printf("TCHAU %d\n\n\n", s.deslocamento);
         } DOIS_PONTOS TIPO {
            if (!strcmp(token, "integer"))
               s.conteudo.param.tipo = pas_integer;
            else if (!strcmp(token, "boolean"))
               s.conteudo.param.tipo = pas_boolean;
            else {
               //fprintf(stderr, "Tipo do parametro formal invalido\n");
               exit(1);
            }
            adicionar(&tabela, s);
         }
;

// =========== REGRA 17 ============= //
comandos: 
         comandos PONTO_E_VIRGULA comando 
         | comando 
         |
;

// =========== REGRA 18 ============= //
comando: 
         atribui_ou_func  {printf("ATRIBUICAO/FUNCAO ESCOLHIDA \n");}
         | comando_composto
         | comando_condicional
         | comando_repetitivo
         | leitura
         | escrita
; 
         
 
// =========== REGRA 19 ============= //
atribui_ou_func:
         IDENT {
            if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
               printf("ERRO: identificador {%s} nao encontrado/nao declarado", token );
               exit(1);
            }
            esquerdo_recursao_func++;
            printf("INDO PARA O ATRIBUI OU PARAMETROS\n");
            printf("identificador achado = %s\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
         }
         continua_atibui_ou_func{
            if ($3 == 1 )
                esquerdo_recursao_func--;
         }
;

continua_atibui_ou_func:
                  ATRIBUICAO atribui_contiunuacao {$$ = 1; printf("ATRIBUICAO ESCOLHIDA \n");}
                  | parametros_ou_nada {$$ = 2; printf( "FUNCAO ESCOLHIDA \n");}
;


atribui_contiunuacao: { printf("ATRIBUICAO ESCOLHIDA - continuacao\n");}
                   expressao{
                     
                     if(esquerdo_func[esquerdo_recursao_func-1]->categoria == variavel){
                        if($2 == esquerdo_func[esquerdo_recursao_func-1]->conteudo.var.tipo){
                           sprintf(mepa_buf, "ARMZ %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                           geraCodigo(NULL, mepa_buf);
                        }else{
                           printf ("ERRO: expresao entre tipos incompativeis \n");
                           exit(1);
                        }
                     }else if (esquerdo_func[esquerdo_recursao_func-1]->categoria == parametro){
                        if($2 == esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo){
                           if (esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_copia ){
                              sprintf(mepa_buf, "ARMZ %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                              geraCodigo(NULL, mepa_buf);
                           }else if (esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_ref){
                              sprintf(mepa_buf, "ARMI %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                              geraCodigo(NULL, mepa_buf);
                           }
                        }else {
                           printf ("ERRO: expresao entre tipos incompativeis \n");
                           exit(1);
                        }
                     } 
                  }
;



// =========== REGRA 20 ============= //
funcao_ou_ident:
               IDENT {
                  if((esquerdo_func[esquerdo_recursao_func] = busca(&tabela, token)) == NULL){
                        printf("falha ao procurar token %s\n", token);
                     exit(1);
                  }
                  esquerdo_recursao_func++;  //evita de esquerdo_func se sobrescrito dentro de uma chamada recursiva de funcao_ou_ident
                  printf("identificador achado = %s\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
               }
               parametros_ou_nada{
                  if (esquerdo_func[esquerdo_recursao_func-1]->categoria == variavel){
                     sprintf(mepa_buf, "CRVL %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                     geraCodigo(NULL, mepa_buf);
                     $$ = esquerdo_func[esquerdo_recursao_func-1]->conteudo.var.tipo;
                  }else if (esquerdo_func[esquerdo_recursao_func-1]->categoria == parametro){
                     if(esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_copia){
                        sprintf(mepa_buf, "CRVL %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                        geraCodigo(NULL, mepa_buf);
                        $$ = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }else if(esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.passagem == parametro_ref){
                        sprintf(mepa_buf, "CRVI %d, %d",esquerdo_func[esquerdo_recursao_func-1]->nivel , esquerdo_func[esquerdo_recursao_func-1]->deslocamento );
                        geraCodigo(NULL, mepa_buf);
                        $$ = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }
                  }
                  esquerdo_recursao_func--;
               }
;

parametros_ou_nada:
                 empilha_retorno ABRE_PARENTESES {num_params = 0;}lista_params FECHA_PARENTESES {
                 if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao || esquerdo_func[esquerdo_recursao_func-1]->categoria == procedimento){
                     $$ = undefined_type; //caso seja procedure
                     if (esquerdo_func[esquerdo_recursao_func-1]->conteudo.proc.qtd_parametros != num_params){
                        printf("%d %d\n", esquerdo_func[esquerdo_recursao_func-1]->conteudo.proc.qtd_parametros, num_params);
                        printf("ERRO: numero errado de parametros\n");
                        exit(1);
                     }
                     sprintf(mepa_buf, "CHPR %s, %d", esquerdo_func[esquerdo_recursao_func-1]->conteudo.proc.rotulo , nivel_lexico );
                     geraCodigo(NULL, mepa_buf);
                  }else{
                     printf("ERRO: {%s} nao eh funcao ou procedimento\n", esquerdo_func[esquerdo_recursao_func-1]->identificador);
                     exit(1);
                  }
                }
                | empilha_retorno {
                  if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao || esquerdo_func[esquerdo_recursao_func-1]->categoria == procedimento){
                     $$ = undefined_type; //caso seja procedure
                     if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao){
                        geraCodigo(NULL, "AMEM 1");
                        $$ = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }
                     sprintf(mepa_buf, "CHPR %s, %d", esquerdo_func[esquerdo_recursao_func-1]->conteudo.proc.rotulo , nivel_lexico );
                     geraCodigo(NULL, mepa_buf);
                  }
                }
;

empilha_retorno:  {
                     if(esquerdo_func[esquerdo_recursao_func-1]->categoria == funcao){
                        geraCodigo(NULL, "AMEM 1");
                        $$ = esquerdo_func[esquerdo_recursao_func-1]->conteudo.param.tipo;
                     }
                  }
;

lista_params:  
               lista_params VIRGULA expressao {num_params++; printf("%dAMAMA\n",num_params);}
               | {printf("%d\n",num_params); }expressao {num_params++; printf("%dSUGA\n",num_params);}
;

// =========== REGRA 22 ============= //
comando_condicional:
                  if_then cond_else {
                        //fprintf(stderr, "TERMONOU O BHUR \n");
                        rotulo_a = pegarrotulo(&p_rotulos);
                        geraCodigo (rotulo_a.rotulo, "NADA"); 
                  }
;

if_then:
         IF expressao {
            if($2 == pas_boolean){
               rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
                rotulo_a = gerarrotulo(&p_rotulos); // segundo rotulo que vai se usado depois
               sprintf(mepa_buf, "DSVF %s",rotulo_a.rotulo);
               geraCodigo(NULL, mepa_buf);
            }else{
               exit(1);
            }
         }
         THEN comando {
            rotulo_a = p_rotulos->pilha[p_rotulos->topo-2];
            sprintf(mepa_buf, "DSVS %s",rotulo_a.rotulo);
            geraCodigo(NULL, mepa_buf);
            rotulo_a = pegarrotulo(&p_rotulos);
            geraCodigo (rotulo_a.rotulo, "NADA"); 
         }
;

cond_else: 
               ELSE comando
              | %prec LOWER_THAN_ELSE
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
                  printf ("ERRO: expressao entre tipos incompativeis \n");
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
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
               | MENOS termo {
                  geraCodigo(NULL, "INVR");
                  if ($2 == pas_integer)
                     $$ = $2;
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
               | expressao_simples MAIS termo  {
                  geraCodigo( NULL, "SOMA");
                  if ($1 == $3 && $1 == pas_integer)
                     $$ = $3;
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
               | expressao_simples MENOS termo {
                  geraCodigo( NULL, "SUBT");
                  if ($1 == $3 && $1 == pas_integer)
                     $$ = $3;
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
                     exit(1);
                  }
               }
               | expressao_simples OR termo {
                  geraCodigo( NULL, "DISJ");
                  if ($1 == $3 && $1 == pas_boolean)
                     $$ = $3;
                  else{
                     printf ("ERRO: expresao entre tipos incompativeis \n");
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
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
      | termo VEZES fator  {
         geraCodigo( NULL, "MULT");
         if ($1 == $3 && $1 == pas_integer)
            $$ = $3;
         else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
         }
      }
      | termo AND fator  {
          geraCodigo( NULL, "CONJ");
          if ($1 == $3 && $1 == pas_boolean)
            $$ = $3;
          else{
            printf ("ERRO: expresao entre tipos incompativeis \n");
            exit(1);
          }
      }
;

fator:
      funcao_ou_ident {
        $$ = $1;
      }
      | NUMERO {
         sprintf (mepa_buf, "CRCT %d", atoi(token));
         geraCodigo(NULL, mepa_buf);
         $$ = pas_integer;
      }   
      | VALOR_BOOL {
         if(strcmp(token, "True") == 0)
            sprintf (mepa_buf, "CRCT %d", 1);
         else
            sprintf (mepa_buf, "CRCT %d", 0);
         geraCodigo(NULL, mepa_buf);
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
                        sprintf(mepa_buf, "ARMZ %d, %d",ps->nivel , ps->deslocamento );
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
                  expressao_simples {
                     if ($1 != undefined_type)
                        geraCodigo(NULL, "IMPR");
                     else {
                        printf("parametro incompativel\n");
                     }   
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
