/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Funções "scanf()" e "printf()".
*/

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
