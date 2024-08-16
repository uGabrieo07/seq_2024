/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Data: 21/08/2024.
* Tópico: Operadores De Ponteiros.
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
 /*Declaração de uma variável comum do tipo inteiro.*/
 int numero = 10;

 /*Declaração de uma variável ponteiro, que aponta para o tipo inteiro.*/
 int *variavelPonteiro;

 printf ("\n\t\t-----OPERADORES DE PONTEIROS-----\n\n");

 /*A variável "variavelPonteiro" recebe o endereço de memória da variável "numero".*/
 variavelPonteiro = &numero;

 /*Imprime o endereço de memória de "variavelPonteiro" através do operados "&".*/
 printf ("Endereco da variavel ponteiro: %p.\n", &variavelPonteiro);

 /*Imprime o conteúdo/valor dentro do endereço de memória
  *de "variavelPonteiro" através do operados "*".*/
 printf ("\nConteudo da variavel ponteiro: %d.\n", *variavelPonteiro);

 /*Retorna que a função foi executada sem erros.*/
 return SUCESSO;
}