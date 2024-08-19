/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Arrays e Strings.
*/

#include <stdio.h>
#include <stdio.h>

int RemoverElemento(int *array, int index_para_remover, int tamanho) {

    // Deslocando os elementos para a esquerda
    for (int i = index_para_remover; i < tamanho - 1; i++) {
        array[i] = array[i + 1];
    }

    return 0;
}

int main() {
    int contador[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int index_para_remover = 4; // Por exemplo, removendo o elemento no índice 4 (valor 4)
    int tamanho = 10;

    printf("Array original:\n");

    // Exibindo array original
    for (int i = 0; i < tamanho; i++) {
        printf("contador[%d] = %d\n", i, contador[i]);
    }

    // "removendo" o elemento
    RemoverElemento(contador, index_para_remover, tamanho);

    printf("\n\n");

    printf("Array com elemento removido:\n");
    // "Reduzindo" o tamanho da array
    tamanho--;

    // Exibindo os resultados
    for (int i = 0; i < tamanho; i++) {
        printf("contador[%d] = %d\n", i, contador[i]);
    }

    return 0;
}