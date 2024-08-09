#include <stdio.h>

int ExemploIf() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero e positivo.\n");
    }
    return 0;
}

int ExemploIfElse() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d é par", numero);
    }
    else {
        printf("O numero %d é impar", numero);
    }

    return 0;
}

int ExemploElseIf() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O número %d é positivo.\n", numero);
    } else if (numero == 0) {
        printf("O número %d é zero.\n", numero);
    } else {
        printf("O número %d é negativo.\n", numero);
    }

    return 0;
}

int ExemploSwitch() {
    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
        break;
        case 2:
            printf("Segunda-feira\n");
        break;
        case 3:
            printf("Terça-feira\n");
        break;
        case 4:
            printf("Quarta-feira\n");
        break;
        case 5:
            printf("Quinta-feira\n");
        break;
        case 6:
            printf("Sexta-feira\n");
        break;
        case 7:
            printf("Sábado\n");
        break;
        default:
            printf("Número inválido para um dia da semana.\n");
    }

    return 0;

}

int main() {
    int opcao;

    printf("Selcione um exemplo\n 1 - If\n 2- IfElse\n 3 - ElseIf\n 4 - Switch\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            ExemploIf();
            break;
        case 2:
            ExemploIfElse();
            break;
        case 3:
            ExemploElseIf();
            break;
        case 4:
            ExemploSwitch();
            break;
        default:
            printf("Opcao invalida !\n");
    }

    return 0;
}


