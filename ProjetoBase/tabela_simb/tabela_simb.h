#ifndef __TABELA_SIMB__
#define __TABELA_SIMB__

#include <stdlib.h>

#include "simbolo.h"

struct tab_simb{
    struct simbolo *simbolos;   //vetor de  simbolos, sendo usado como pilha
    unsigned int topo;          //tamanho da pilha
};

struct tab_simb * inicializa();

void adicionar(struct tab_simb **tabela, struct simbolo simb);

struct simbolo remover(struct tab_simb **tabela) ;

struct simbolo *buscar(struct tab_simb **tabela, const char *nome);

void remover_varios(struct tab_simb **tabela, int qunatiade);

void coloca_tipo(struct tab_simb **tabela, int tipo, int quantidade);

void imprime_tabela(struct tab_simb **tabela);

#endif