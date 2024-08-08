#include <stdio.h>

int main(int argc, char *argv[]) {
    // Exibe a quantidade de argumentos
    printf("Numero de argumentos: %d\n", argc);

    // Exibe cada argumento
    for (int i = 0; i < argc; i++) {
        printf("Argumento %d: %s\n", i, argv[i]);
    }

    return 0;
}
