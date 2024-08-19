/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Arrays e Strings.
*/

#include  <stdio.h>

int main(){
    int contador[10]; //index vai de 0 a 9

    int index;
    for (index = 0; index < 100; index++){
        if (index > 9) {
            printf("Erro: limites extrapolados\n");
            return  1;
        }
        contador[index] = index;
    }

    printf("Fim\n");
    return 0;
}