

/* Caso a macro "AULA0101" nao tenha sido definida anterioirmente, as seguintes etapas sao ocorridas. */
#ifndef EXEMPLO01

/* Definicao da macro "AULA0101". */
#define EXEMPLO01

/* Deficao de "apelidos" aos tipos "short unsigned" e "long unsigned". */
typedef short unsigned us;
typedef long unsigned ul;

/* Prototipo da funcao "ExibirCabecalho". */
void 
ExibirCabecalho(us);

/* Prototipo da funcao "ExibirHifens". */
void 
ExibirHifens(us);

/* Fim da condicao. */
#endif


