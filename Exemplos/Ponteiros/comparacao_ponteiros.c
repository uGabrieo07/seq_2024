/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Ponteiros - Comparação de Ponteiros.
*/

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *p1 = &arr[1];  // p1 aponta para o segundo elemento (20)
    int *p2 = &arr[3];  // p2 aponta para o quarto elemento (40)

    // Comparação de igualdade
    if (p1 == p2) {
        printf("p1 e p2 apontam para o mesmo endereco.\n");
    } else {
        printf("p1 e p2 apontam para enderecos diferentes.\n");
    }

    // Comparação relacional
    if (p1 < p2) {
        printf("p1 aponta para um endereco antes de p2.\n");
    } else if (p1 > p2) {
        printf("p1 aponta para um endereco depois de p2.\n");
    }

    return 0;
}
