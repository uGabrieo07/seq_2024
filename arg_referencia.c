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
