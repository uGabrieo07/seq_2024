/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Funções - Passagem de Argumentos por Referência.
*/

#include <stdio.h>

void alterarValor(int *p) {
    *p = 20;  // Modifica o valor da variável original
}

int main() {
    int x = 10;
    printf("Antes: %d\n", x);  // Saída: 10

    alterarValor(&x);  // Passa o endereço de 'x' para a função

    printf("Depois: %d\n", x);  // Saída: 20
    return 0;
}
