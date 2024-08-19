/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Strings.
*/

#include <stdio.h>
#include <string.h>

int main(){
    // inicializando uma string como array de char
    // o compilador adiciona automaticamente '\0' no fim da string
    char str1[] = "Ola, isto e um teste";
    char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", str1);
    printf("%s\n", str2);

    // inicializando uma string como ponteiro para char
    char *str3 = "Ola, isto e um teste tambem";
    printf("%s\n", str3);

    return 0;
}
