/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Data: 21/08/2024.
* Tópico: Operadores Lógicos.
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

    /*Atribui à variável "numero" com o valor 0.*/
    numero = 0;

    printf ("\n\t\t-----OPERADORES LOGICOS-----\n\n");

    /*Pede um número ao usuário.*/
    printf ("Insira um numero:");
    scanf ("%d", &numeroInserido);

    /*Caso a condição da função "printf" for verdadeira, será impresso o número 1.
     *Caso contrário, será impresso o número 0.*/
    printf ("\n%d\n", !(numeroInserido && numero));
    printf ("\n%d\n", !(numeroInserido || numero));
    printf ("\n%d\n", !numeroInserido || (numeroInserido && !numero));
    printf ("\n%d\n", (numeroInserido && ((numero || !numeroInserido) && (numero || numeroInserido && !numero))) || (numeroInserido && !numero));

    /*Retorna que a função foi executada sem erros.*/
    return SUCESSO;
}