/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Funções - "argc" e "argv" para passar argumentos para "main()".
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    // Exibe a quantidade de argumentos
    printf("\nNumero de argumentos: %d\n\n", argc);

    // Exibe cada argumento
    for (int i = 0; i < argc; i++) {
        printf("Argumento %d: %s\n", i, argv[i]);
    }

    printf("\n");

    return 0;
}