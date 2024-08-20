#include <stdio.h>

void exemplo_break_continue() {
    printf("Exemplo de break e continue:\n");

    for (int i = 1; i <= 10; i++) {
        // Exemplo de continue
        if (i == 5) {
            printf("Continue: Pulando o numero %d\n", i);
            continue; // Pule a iteração atual e vá para a próxima
        }

        // Exemplo de break
        if (i == 8) {
            printf("Break: Saindo do loop no numero %d\n", i);
            break; // Sai do loop completamente
        }

        printf("Numero: %d\n", i);
    }
}

int exemplo_return(int x) {
    printf("Exemplo de return:\n");

    if (x > 0) {
        printf("x e positivo. Retornando 1.\n");
        return 1; // Retorna 1 se x for positivo e sai da função
    } else if (x < 0) {
        printf("x e negativo. Retornando -1.\n");
        return -1; // Retorna -1 se x for negativo e sai da função
    } else {
        printf("x e zero. Retornando 0.\n");
        return 0; // Retorna 0 se x for zero e sai da função
    }
}

int main() {
    // Demonstrando break e continue
    exemplo_break_continue();

    // Demonstrando return
    int resultado = exemplo_return(5);
    printf("Resultado do return: %d\n", resultado);

    resultado = exemplo_return(-3);
    printf("Resultado do return: %d\n", resultado);

    resultado = exemplo_return(0);
    printf("Resultado do return: %d\n", resultado);

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
