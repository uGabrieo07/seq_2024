#include <stdio.h>
#include <stdlib.h>

#define ERRO_DETECCAO           1

// primeiro, definimos o tipo do return na funcao
// se nenhum tipo é especificado, o compilador considera que o return é do tipo inteiro

const int numero = 10; // variável global

int EstaEm(char *s, char caractere ) {
    int index = 0; // variável local da função EstaEm()

    while (s[index] != '\0') {
        if ( s[index] == caractere) {
            printf("O caractere %c esta na palavra %s\n", caractere, s);
            return 0;
        }
        else {
            index++;
        }
    }
    return 1;
}


int main() {
    // conjunto de variáveis locais da função main()
    char *s = "Gabriel";
    char caractere = 'r';
    int resultado = EstaEm(s, caractere);

    if (resultado != 0){
        printf("O caractere %c nao esta na palavra %s", caractere, s);
        exit(ERRO_DETECCAO);
    }

    return 0;
}