
%{
#include <stdio.h>
%}

%token IDENT_A IDENT_B MAIS MENOS OR ASTERISCO DIV ABRE_PARENTESES FECHA_PARENTESES AND

%%

ex		   : expr|
			 expr_bool
;			 

expr       : expr MAIS termo {printf ("+"); } |
             expr MENOS termo {printf ("-"); } | 
             termo
;

termo      : termo ASTERISCO fator  {printf ("*"); }| 
             termo DIV fator  {printf ("/"); }|
             fator
;

fator      : IDENT_A {printf ("A"); }
;

expr_bool  : expr_bool OR fator_bool {printf("||"); }|
			 expr_bool AND fator_bool {printf("&&");}|
			 fator_bool
;			 

fator_bool  : IDENT_B{printf("B"); }
;


%%

main (int argc, char** argv) {
   yyparse();
   printf("\n");
}

