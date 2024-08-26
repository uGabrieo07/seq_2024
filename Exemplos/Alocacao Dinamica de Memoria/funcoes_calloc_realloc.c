/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Alocação Dinâmica de Memória - Funções "calloc()" e "realloc()".
*/

#include <stdio.h>
#include <stdlib.h>

#define SUCESSO                             0
#define ERRO_ALOCANDO_MEMORIA               1
#define ERRO_REALOCANDO_MEMORIA             2

typedef unsigned long long llu;

/*Função Principal.*/
int
main ()
{
    /*Declaração das variáveis.*/
    llu *matriz, *matrizTemporaria;
    llu numeroElementosInserido, numeroElementosRedimensionamento, indexNumero;

    printf ("\n\t\t-----ALOCACAO DINAMICA DE MEMORIA - FUNCOES CALLOC() E REALLOC()-----\n\n");

    /*Solicita ao usuário o número de elementos desejado para a matriz.*/
    printf("Digite o numero de elementos da matriz: ");
    scanf("%llu", &numeroElementosInserido);

    /*Alocação de memória, utilizando a função "calloc()".*/
    matriz = (llu *) calloc(numeroElementosInserido, sizeof(llu));

    /*Verifica se a alocação de memória foi bem-sucedida. Caso a alocação falhe, o programa é encerrado.*/
    if (matriz == NULL)
    {
        printf("\nErro ao alocar memoria!\n");
        exit (ERRO_ALOCANDO_MEMORIA);
    }

    /*Inicializa a matriz, atribuindo o valor ("indexNumero" + 1) à posição "indexNumero" da matriz.*/
    for (indexNumero = 0; indexNumero < numeroElementosInserido; indexNumero++)
        matriz[indexNumero] = indexNumero + 1;

    /*Imprime os elementos da matriz após a utilização da função "calloc()".*/
    printf("\nElementos da matriz apos a alocacao de memoria: ");
    for (indexNumero = 0; indexNumero < numeroElementosInserido; indexNumero++)
        printf("%llu ", matriz[indexNumero]);

    printf("\n\n");

    /*Solicita ao usuário o número de elementos desejado para o redimensionamento.*/
    printf("Digite o numero de elementos da matriz apos o redimensionamento: ");
    scanf("%llu", &numeroElementosRedimensionamento);

    /*Redimenciona o tamanho da memória previamente alocada apontada por matriz, utilizando a função "realloc()".*/
    matrizTemporaria = (llu *) realloc(matriz, numeroElementosRedimensionamento * sizeof(llu));

    /*Libera a memória alocada para "matriz" antes do redimensionamento, a fim de evitar vazamento de memória.*/
    free(matriz);

    /*Verifica se a realocação de memória foi bem-sucedida. Caso a alocação falhe, o programa é encerrado.*/
    if (matrizTemporaria == NULL) {
        printf("\nErro ao realocar memoria!\n");
        return ERRO_REALOCANDO_MEMORIA;
    }

    /*Atualiza o ponteiro "matriz" com o novo endereço alocado por "matrizTemporaria".*/
    matriz = matrizTemporaria;

    /*Reinicializa a matriz, atribuindo o valor ("indexNumero" + 1) à posição "indexNumero" da matriz.*/
    for (indexNumero = 0; indexNumero < numeroElementosRedimensionamento; indexNumero++)
        matriz[indexNumero] = indexNumero + 1;

    /*Imprime os elementos da matriz após a utilização da função "realloc()".*/
    printf("\nElementos da matriz apos a realocacao de memoria: ");
    for (indexNumero = 0; indexNumero < numeroElementosRedimensionamento; indexNumero++)
        printf("%llu ", matriz[indexNumero]);

    printf("\n");

    /*Libera a memória alocada para "matriz" após o redimensionamento, utilizando a função "free()".*/
    free(matriz);

    return SUCESSO;
}