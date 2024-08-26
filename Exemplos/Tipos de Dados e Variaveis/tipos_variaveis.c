/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Tipos de Dados e Variáveis.
*/

#include <stdio.h>

#define SUCESSO  0;
#define PI 3.14159;
#define DIAS_DA_SEMANA 7;

int main() {
    int idade = 20; /* Declara e inicializa 'idade' */
    float altura = 1.80;  /* Declara e inicializa 'altura' */
    char *nome = "Robson";     /* Declara e inicializa 'nome' */
    char tipoSanguineo = 'B'; /* Declara e inicializa 'tipoSanguineo' */
    const char inicial = 'A';
    const int horasDia = 24;

    /*Informacoes pessoais*/
    printf("\nNome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Tipo: %c\n", tipoSanguineo);
    printf("Inicial: %c\n", inicial);
    printf("Horas Dia: %d\n", horasDia);

    return SUCESSO;
}
