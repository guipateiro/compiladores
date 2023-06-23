#ifndef __GERADOR_ROTULOS__
#define __GERADOR_ROTULOS__

struct rotulo{
    char * rotulo;
};

struct pilha_rotulos{
    struct rotulo *pilha;
    int topo;
    int num_rotulo; 
};

struct pilha_rotulos * inicializa_rotulos();

struct rotulo gerarrotulo(struct pilha_rotulos ** pilha_r);

struct rotulo gerarrotulosp(struct pilha_rotulos ** pilha_r);

struct rotulo pegarrotulo(struct pilha_rotulos ** pilha_r);

void remove_n(struct pilha_rotulos ** pilha_r, int n);

#endif