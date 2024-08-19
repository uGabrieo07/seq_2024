/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Alocação Dinâmica de Memória - Funções "malloc()" e "free()".
*/

#include <stdio.h>
#include <stdlib.h>

#define SUCESSO                             0
#define ERRO_ALOCANDO_MEMORIA               1

typedef unsigned long long llu;

/*Função Principal.*/
int
main ()
{
    /*Declaração das variáveis.*/
    llu *matriz;
    llu numeroElementosInserido, indexNumero;

    printf ("\n\t\t-----ALOCACAO DINAMICA DE MEMORIA - FUNCOES MALLOC() E FREE()-----\n\n");

    /*Solicita ao usuário o número de elementos desejado.*/
    printf("Digite o numero de elementos da matriz: ");
    scanf("%llu", &numeroElementosInserido);

    /* Aloca memória para "numeroElementosInserido" inteiros do tipo
     * unsigned long long, utilizando a função "malloc()".*/
    matriz = (llu *) malloc(numeroElementosInserido * sizeof(llu));

    /*Verifica se a alocação de memória foi bem-sucedida.
     * Caso a alocação falhe, o programa é encerrado.*/
    if (matriz == NULL)
    {
        printf("\nErro ao alocar memoria!\n");
        exit (ERRO_ALOCANDO_MEMORIA);
    }

    /*Inicializa a matriz, atribuindo o valor ("indexNumero" + 1) à posição "indexNumero" da matriz.*/
    for (indexNumero = 0; indexNumero < numeroElementosInserido; indexNumero++)
        matriz[indexNumero] = indexNumero + 1;

    /*Imprime os elementos da matriz.*/
    printf("\nElementos da matriz: ");
    for (indexNumero = 0; indexNumero < numeroElementosInserido; indexNumero++)
        printf("%llu ", matriz[indexNumero]);

    printf("\n");

    /*Libera a memória alocada para a matriz, utilizando a função "free()".*/
    free(matriz);

    return SUCESSO;
}