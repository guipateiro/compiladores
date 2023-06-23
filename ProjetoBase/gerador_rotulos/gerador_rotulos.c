#include "gerador_rotulos.h"
#include <stdio.h>
#include <stdlib.h>

struct pilha_rotulos * inicializa_rotulos(){
    struct pilha_rotulos * rotulos = NULL;
    (rotulos) = malloc(sizeof(struct pilha_rotulos));
    (rotulos)->pilha = malloc(256 * sizeof(struct rotulo));
    for(int i = 0; i < 256; i++){
        (rotulos)->pilha[i].rotulo = malloc(16 * sizeof(char));
    }
    (rotulos)->topo = 0; 
    (rotulos)->num_rotulo = 0; 
    return rotulos;
}

struct rotulo gerarrotulo(struct pilha_rotulos ** pilha_r){
    sprintf((*pilha_r)->pilha[(*pilha_r)->topo].rotulo, "R%02i",  (*pilha_r)->num_rotulo);
    (*pilha_r)->topo++;
    (*pilha_r)->num_rotulo++;
    return (*pilha_r)->pilha[(*pilha_r)->topo-1];
}

struct rotulo gerarrotulosp(struct pilha_rotulos ** pilha_r){
    sprintf((*pilha_r)->pilha[(*pilha_r)->topo].rotulo, "R%02i",  (*pilha_r)->num_rotulo);
    //(*pilha_r)->topo++;
    (*pilha_r)->num_rotulo++;
    return (*pilha_r)->pilha[(*pilha_r)->topo];
}

struct rotulo pegarrotulo(struct pilha_rotulos ** pilha_r){
    (*pilha_r)->topo--;
    return (*pilha_r)->pilha[(*pilha_r)->topo];
}


void remove_n(struct pilha_rotulos ** pilha_r, int n){
     (*pilha_r)->topo  -= n;
}