#include <stdio.h>

int main() {
    int idade;
    float altura;
    char inicial;
    char nome[50];

    // Lendo um inteiro
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Lendo um float
    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    // Lendo um caractere
    printf("Digite a inicial do seu nome: ");
    scanf(" %c", &inicial);

    // Lendo uma string
    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);

    // Exibindo os dados lidos
    printf("\nIdade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Inicial do nome: %c\n", inicial);
    printf("Nome: %s\n", nome);

    return 0;
}
