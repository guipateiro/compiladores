
// Testar se funciona corretamente o empilhamento de par�metros
// passados por valor ou por refer�ncia.


%{
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "compilador.h"
#include "tabela_simb/tabela_simb.h"

int num_vars;
char mepa_buf[128];

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
             }
             PROGRAM IDENT
             ABRE_PARENTESES lista_idents FECHA_PARENTESES PONTO_E_VIRGULA
             bloco PONTO {
             geraCodigo (NULL, "PARA");
             }
;


// =========== REGRA 2 ============= //
bloco       :
            parte_declara_vars
            {
            }
            parte_declara_sub_rotinas
            {
            }
            comando_composto
            {
            }
;



// =========== REGRA 8 ============= //
parte_declara_vars: 
					VAR declaracao_de_vars
               |
;

// =========== REGRA 9 ============= //
declaracao_de_vars: declaracao_de_vars declaracao_de_var 
                  | declaracao_de_var

declaracao_de_var: {num_vars = 0;}
                   lista_idents DOIS_PONTOS tipo PONTO_E_VIRGULA
                  {
					   sprintf(mepa_buf, "AMEM %d", num_vars);
					   geraCodigo(NULL,mepa_buf);
					   }

;

tipo        : TIPO
;


// =========== REGRA 10 ============= //
lista_idents: lista_idents VIRGULA IDENT {num_vars++;}
            | IDENT {num_vars++;}
;

// =========== REGRA 16 ============= //
comando_composto: T_BEGIN comandos T_END


parte_declara_sub_rotinas:
;


// =========== REGRA 17 ============= //
comandos: 
         comandos PONTO_E_VIRGULA comando 
         | comando 
         |
;

// =========== REGRA 18 ============= //
comando: 
         atribui 
         | chamada_de_procedimento
         | comando_composto
         | comando_condicional
         | comando_repetitivo
 
         
 
// =========== REGRA 19 ============= //
atribui:
         IDENT ATRIBUICAO expressao

// =========== REGRA 20 ============= //
chamada_de_procedimento:
;

// =========== REGRA 22 ============= //
comando_condicional:
                  IF expressao THEN comando else_ou_nada
;

else_ou_nada: 
               ELSE comando
               |
;                

// =========== REGRA 23 ============= //
comando_repetitivo:
                  WHILE expressao DO comando
;

// =========== REGRA 25 ============= //
expressao:
            expressao_simples relacao expressao_simples
            | expressao_simples
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
               termo {}
               | MAIS termo {}
               | MENOS termo {}
               | expressao_simples MAIS termo  {}
               | expressao_simples MENOS termo {}
               | expressao_simples OR termo {}
;

termo: 
      fator  {}
      | termo DIV fator  {}
      | termo VEZES fator {}
      | termo AND fator {}
;


fator:
      IDENT
      | NUMERO
      | chamada_de_funcao
      | ABRE_PARENTESES expressao_simples FECHA_PARENTESES
;

chamada_de_funcao:
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

   return 0;
}
