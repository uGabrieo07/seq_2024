/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Operadores e Expressões - Operador de Atribuição.
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
    /*Declaração da variável "numero" do tipo "inteiro".*/
    int numero;
    signed int numeroComSinal;
    float numeroPontoFlutuante;

    /*Utilização do operador de atribuição "=" para atribuir o valor inteiro "100" à variável "numero".*/
    numero = 100;
    // numero = -100;
    numeroComSinal = -1000;
    numeroPontoFlutuante = 12.34;

    /*Utilização da função "printf" para imprimir a variável "numero".*/
    printf ("\nnumero = %u\n", numero);

    printf ("\nnumero com sinal = %d\n", numeroComSinal);

    printf ("\nnumero ponto flutuante = %.2f\n", numeroPontoFlutuante);

    /*Retorna que a função foi executada sem erros.*/
    return SUCESSO;
}