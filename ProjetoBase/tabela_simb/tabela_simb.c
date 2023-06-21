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
    //printf("ROTULO ATUAL: %s\n",(*tabela)->simbolos[(*tabela)->topo].conteudo.proc.rotulo);
    (*tabela)->topo++;
}

struct simbolo remover(struct tab_simb **tabela) {
    struct simbolo simb;
    (*tabela)->topo--;
    simb = (*tabela)->simbolos[ (*tabela)->topo];
    return simb;
}

void coloca_tipo(struct tab_simb **tabela, int tipo, int quantidade){
    
    for(int i = (*tabela)->topo-1; i >= (*tabela)->topo-(quantidade); i--){
        //printf("i = %i || (*tabela)->topo-(quantidade) = %i\n", i, (*tabela)->topo-(quantidade));
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
        if((*tabela)->simbolos[i].categoria == procedimento || (*tabela)->simbolos[i].categoria == funcao){
            printf("Simbolo %i: token = %s || nivel = %i || rotulo = %s ",i, (*tabela)->simbolos[i].identificador , (*tabela)->simbolos[i].nivel , (*tabela)->simbolos[i].conteudo.proc.rotulo);
            for(int j = 0; j< (*tabela)->simbolos[i].conteudo.proc.qtd_parametros; j++){
                printf("\tP%i[T: %i|PASS: %i] ", j, (*tabela)->simbolos[i].conteudo.proc.lista[j].tipo , (*tabela)->simbolos[i].conteudo.proc.lista[j].passagem );
            }
            printf("\n");
        }else {
            printf("Simbolo %i: token = %s || nivel = %i || deslocamento = %i \n",i, (*tabela)->simbolos[i].identificador , (*tabela)->simbolos[i].nivel , (*tabela)->simbolos[i].deslocamento);
        }
    }
}

void remover_ate(struct tab_simb **tabela, const char *nome) {
    printf("removendo func/proc %s\n", nome);
    struct simbolo* simb = NULL; 
    int i;
    for(i = (*tabela)->topo-1; i >= 0; i--) {
        if (!strcmp((*tabela)->simbolos[i].identificador, nome) && ((*tabela)->simbolos[i].categoria == procedimento || (*tabela)->simbolos[i].categoria == funcao)) {
            simb = &(*tabela)->simbolos[i];
            (*tabela)->topo--;
            break;
        }
        imprime_tabela(tabela);
        (*tabela)->topo--;
    }
    for(--i; i >= 0; i--) {
        if ((*tabela)->simbolos[i].deslocamento >= 0)
            break;
        (*tabela)->topo--;
    
        imprime_tabela(tabela);
    }
    adicionar(tabela,*simb);
    imprime_tabela(tabela);
}


void coloca_deslocamento(struct tab_simb **tabela, int num_params){
    int deslc = 0;
    for(int i = (*tabela)->topo-1; i >= (*tabela)->topo-(num_params); i--){
        //printf("i = %i || (*tabela)->topo-(quantidade) = %i\n", i, (*tabela)->topo-(quantidade));
       (*tabela)->simbolos[i].deslocamento = -4 + deslc;      
       deslc--;   
    }   
}