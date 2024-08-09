/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Data: 21/08/2024.
* Tópico: Operadores Relacionais.
*/

/*Diz ao compilador que ele deve incluir o arquivo-cabeçalho "stdio.h",
 *na qual possui declarações de funções úteis para entrada e saída de dados .*/
#include <stdio.h>

/*Definição da macro "SUCESSO" que será retornada pelo programa, caso não tenha ocorrido nenhum erro.
 * OBS: 0 (ZERO) representa sucesso e diferente de ZERO representa erro.*/
#define SUCESSO             0

/*Função Principal*/
int
main ()
{
    /*Declaração de variáveis do tipo inteiro.*/
    int numero, numeroInserido;

    /*Atribui à variável "numero" com o valor 10.*/
    numero = 10;

    printf ("\n\t\t-----OPERADORES RELACIONAIS-----\n\n");

    /*Pede um número ao usuário.*/
    printf ("Insira um numero:");
    scanf ("%d", &numeroInserido);

    /*Condição que verifica se o número inserido é menor que o número pré-estabelecido.*/
    if (numeroInserido > numero)
        printf ("\n%d > %d\n", numeroInserido, numero);

    /*Condição que verifica se o número inserido é maior que o número pré-estabelecido.*/
    if (numeroInserido < numero)
        printf ("\n%d < %d\n", numeroInserido, numero);

    /*Condição que verifica se o número inserido é maior ou igual ao número pré-estabelecido.*/
    if (numeroInserido >= numero)
        printf ("\n%d >= %d\n", numeroInserido, numero);

    /*Condição que verifica se o número inserido é menor ou igual ao número pré-estabelecido.*/
    if (numeroInserido <= numero)
        printf ("\n%d <= %d\n", numeroInserido, numero);

    /*Condição que verifica se o número inserido é igual ao número pré-estabelecido.*/
    if (numeroInserido == numero)
        printf ("\n%d = %d\n", numeroInserido, numero);

    /*Condição que verifica se o número inserido é diferente do número pré-estabelecido.*/
    if (numeroInserido != numero)
        printf ("\n%d != %d\n", numeroInserido, numero);

    /*Caso a condição do terceiro argumento da função "printf" for verdadeira, será impresso o número 1.
     *Caso contrário, será impresso o número 0.*/
    printf ("\n%d > %d: %d\n", numeroInserido, numero, numeroInserido > numero);
    printf ("\n%d < %d: %d\n", numeroInserido, numero, numeroInserido < numero);
    printf ("\n%d >= %d: %d\n", numeroInserido, numero, numeroInserido >= numero);
    printf ("\n%d <= %d: %d\n", numeroInserido, numero, numeroInserido <= numero);
    printf ("\n%d == %d: %d\n", numeroInserido, numero, numeroInserido == numero);
    printf ("\n%d != %d: %d\n", numeroInserido, numero, numeroInserido != numero);

    /*Retorna que a função foi executada sem erros.*/
    return SUCESSO;
}