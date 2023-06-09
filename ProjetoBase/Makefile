 # -------------------------------------------------------------------
 #            Arquivo: Makefile
 # -------------------------------------------------------------------
 #              Autor: Bruno Müller Junior
 #               Data: 08/2007
 #      Atualizado em: [09/08/2020, 19h:01m]
 #
 # -------------------------------------------------------------------

$DEPURA=1

compilador: lex.yy.c compilador.tab.c compilador.o compilador.h tabela_simb.o simbolo.o
	gcc lex.yy.c compilador.tab.c compilador.o tabela_simb/tabela_simb.o tabela_simb/simbolo.o -o compilador -ll -ly -lc

lex.yy.c: compilador.l compilador.h
	flex compilador.l

compilador.tab.c: compilador.y compilador.h tabela_simb.o
	bison compilador.y -d -v -Wcounterexamples

compilador.o : compilador.h compiladorF.c
	gcc -c compiladorF.c -o compilador.o

tabela_simb.o: tabela_simb/tabela_simb.c tabela_simb/tabela_simb.h tabela_simb/simbolo.c tabela_simb/simbolo.h
		make -C tabela_simb/

simbolo.o: tabela_simb/simbolo.c tabela_simb/simbolo.h tabela_simb/simbolo.c tabela_simb/simbolo.h
		make -C tabela_simb/


clean :
	rm -f compilador.tab.* lex.yy.c compilador.o compilador
