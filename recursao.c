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