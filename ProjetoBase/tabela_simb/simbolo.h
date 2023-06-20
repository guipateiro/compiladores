#ifndef __SIMBOLO__
#define __SIMBOLO__

enum tipo_simbolo{
    variavel,
    parametro,
    procedimento,
    funcao
};

enum tipo_variavel{
    pas_integer,
    pas_boolean,
    undefined_type
};

enum tipo_passagem{
    parametro_copia,
    parametro_ref
};


/* Três tipos de símbolos */
struct variavel{
    int tipo;               //tipo_variavel
    int deslocamento;
};

struct parametro{
    int tipo;           //tipo_bvariavel
    int deslocamento;
    int passagem;       //tipo_passagem
};

struct procedimento{
    char rotulo[20];             //rotulo de desvi
    int qtd_parametros;     //numero de parametros
    struct parametro lista[128];   //informacoes de cada parametro
};

/*------------------------*/

struct simbolo{
    char *identificador;    //nome da variavel
    int categoria;          // tipo_simbolo
    int nivel;              // nivel lexico
    struct cat_conteudo{
        struct variavel var;           //variavel //funcao
        struct parametro param;        //parametro
        struct procedimento proc;      //procedimento //funcao
    } conteudo;
};

struct simbolo cria_simbolo(char *ident, int cat, int niv, struct cat_conteudo tipo);

#endif