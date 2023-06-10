#include "tabela_simb.h"
#include <string.h>
#include <stdio.h>

struct tab_simb * inicializa(){
    struct tab_simb *tabela = NULL;
    (tabela) = malloc(sizeof(struct tab_simb));
    (tabela)->simbolos = malloc(256 * sizeof(struct simbolo));
    (tabela)->topo = 0; 
    return tabela;
}

void adicionar(struct tab_simb **tabela, struct simbolo simb){
    (*tabela)->simbolos[(*tabela)->topo] = simb;
    (*tabela)->topo++;
}

struct simbolo remover(struct tab_simb **tabela) {
    struct simbolo simb;
    (*tabela)->topo--;
    simb = (*tabela)->simbolos[ (*tabela)->topo];
    return simb;
}

void coloca_tipo(struct tab_simb **tabela, int tipo, int quantidade){
    for(unsigned int i = (*tabela)->topo-1; i <= (*tabela)->topo-(quantidade+1); i--){
       (*tabela)->simbolos[i].conteudo.var.tipo = tipo;         
    }    
}

struct simbolo *busca(struct tab_simb **tabela, const char *nome){
    for(int i = (*tabela)->topo-1; i >= 0; i--){
        if (!strcmp( (*tabela)->simbolos[i].identificador, nome )) 
            return &(*tabela)->simbolos[i];
    }
    return NULL;
}

void remover_varios(struct tab_simb **tabela, int quantidade){
    (*tabela)->topo -= quantidade;
}

void imprime_tabela(struct tab_simb **tabela){
    printf("numero de simbolos %i\n",(*tabela)->topo-1);
     for(int i = (*tabela)->topo-1; i >= 0; i--){
        printf("Simbolo %i: token = %s || nivel = %i || deslocamento = %i \n",i, (*tabela)->simbolos[i].identificador , (*tabela)->simbolos[i].nivel , (*tabela)->simbolos[i].conteudo.var.deslocamento);
    }
}
