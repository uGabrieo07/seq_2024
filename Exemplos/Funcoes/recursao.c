/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Funções - Recursão.
*/

#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;  // Condição de parada
    } else {
        return n * fatorial(n - 1);  // Chamada recursiva
    }
}

int main() {
    int numero = 10;

    printf("Resultado: %d", fatorial(5));

    return 0;
}