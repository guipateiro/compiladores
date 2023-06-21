#ifndef __TABELA_SIMB__
#define __TABELA_SIMB__

#include <stdlib.h>

#include "simbolo.h"

struct tab_simb{
    struct simbolo *simbolos;   //vetor de  simbolos, sendo usado como pilha
    int topo;          //tamanho da pilha
};

struct tab_simb * inicializa();

void adicionar(struct tab_simb **tabela, struct simbolo simb);

struct simbolo remover(struct tab_simb **tabela) ;

struct simbolo *busca(struct tab_simb **tabela, const char *nome);

void remover_varios(struct tab_simb **tabela, int qunatiade);

void coloca_tipo(struct tab_simb **tabela, int tipo, int quantidade);

void imprime_tabela(struct tab_simb **tabela);

void remover_ate(struct tab_simb **tabela, const char *nome);

void coloca_deslocamento(struct tab_simb **tabela, int num_params);

#endif