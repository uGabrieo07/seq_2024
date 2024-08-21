#include <stdio.h>

int main() {
    // Exemplo de loop for
    printf("Exemplo de loop for:\n");
    // O loop for é usado quando você sabe de antemão quantas vezes quer repetir um bloco de código
    for(int i = 0; i < 5; i++) {
        // Este bloco de código será executado 5 vezes, com i variando de 0 a 4
        printf("i = %d\n", i);
    }

    printf("\n");

    // Exemplo de loop while
    printf("Exemplo de loop while:\n");
    // O loop while é usado quando você quer repetir um bloco de código enquanto uma condição for verdadeira
    int j = 0;
    while(j < 5) {
        // Este bloco de código será executado enquanto j for menor que 5
        printf("j = %d\n", j);
        j++; // Incrementa j a cada iteração
    }

    printf("\n");

    // Exemplo de loop do-while
    printf("Exemplo de loop do-while:\n");
    // O loop do-while é semelhante ao while, mas garante que o bloco de código seja executado pelo menos uma vez
    int k = 0;
    do {
        // Este bloco de código será executado pelo menos uma vez, mesmo que a condição seja falsa
        printf("k = %d\n", k);
        k++; // Incrementa k a cada iteração
    } while(k < 5); // A condição é verificada após a execução do bloco de código

    printf("\n");

    printf("Exemplo operador ternario:\n");
    int maior = (k > j) ? k : j;
    printf("O maior numero e: %d\n", maior);

    return 0;
}
