/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Ponteiros.
*/

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;    // p aponta para o primeiro elemento de arr

    printf("Valor de *p: %d\n", *p);   // 10

    p++;   // Incrementa o ponteiro, agora p aponta para o segundo elemento de arr
    printf("Valor de *p apos p++: %d\n", *p);  // 20

    p += 2;   // Avança o ponteiro por mais 2 posições
    printf("Valor de *p apos p += 2: %d\n", *p);  // 40

    p--;   // Decrementa o ponteiro, voltando uma posição
    printf("Valor de *p apos p--: %d\n", *p);  // 30

    int *q = &arr[4];  // q aponta para o último elemento de arr
    int diff = q - p;  // Diferença de ponteiros
    printf("Diferença entre q e p: %d\n", diff);  // 2 (duas posições de diferença)

    return 0;
}
