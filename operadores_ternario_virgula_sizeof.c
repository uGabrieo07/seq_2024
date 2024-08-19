/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Data: 21/08/2024.
* Tópico: Operadores Ternário "?", Vírgula e Sizeof.
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
 /*Declarações de variáveis do tipo inteiro.*/
 int numero, numeroInserido;

 /*Atribui à variável "numero" com o valor 10.*/
 numero = 10;

 /*Pede um número ao usuário.*/
 printf ("Insira um numero:");
 scanf ("%d", &numeroInserido);

 /*Exemplos do Operador Ternário "?".*/
 printf ("\n\t\t-----OPERADOR TERNARIO ?-----\n");
 printf ("\nNumero Inicial: %d\n", numero);
 numeroInserido > 3 ? (numero *= numeroInserido) : (numero *= 2000);
 printf ("Numero apos Primeira Atualizacao: %d\n", numero);
 numero > 1000 ? (numero = 0) : (numero = 1);
 printf ("Numero apos Segunda Atualizacao: %d\n", numero);

 /*Exemplos do Operador Vírgula.*/
 printf ("\n\t\t-----OPERADOR VIRGULA-----\n");
 printf ("\nNumero Inserido: %d\n", numeroInserido);
 numeroInserido = (numeroInserido *= 100, numeroInserido / 3);
 printf ("Numero Inserido apos Primeira Atualizacao: %d\n", numeroInserido);
 numeroInserido = (numero = 50, numeroInserido -= (numero * 4), numeroInserido %= 7);
 printf ("Numero Inserido apos Segunda Atualizacao: %d\n", numeroInserido);

 /*Exemplos do Operador Sizeof.*/
 printf ("\n\t\t-----OPERADOR SIZEOF-----\n");
 printf ("\nTamanho do Tipo Char: %llu %s\n", sizeof(char), sizeof(char) > 1 ? "bytes" : "byte");
 printf ("\nTamanho do Tipo Int: %llu %s\n", sizeof(numero), sizeof(numeroInserido) > 1 ? "bytes" : "byte");
 printf ("\nTamanho do Tipo Float: %llu %s\n", sizeof(float), sizeof(float) > 1 ? "bytes" : "byte");
 printf ("\nTamanho do Tipo Long Int: %llu %s\n", sizeof(long), sizeof(long) > 1 ? "bytes" : "byte");
 printf ("\nTamanho do Tipo Double: %llu %s\n", sizeof(double), sizeof(double) > 1 ? "bytes" : "byte");
 printf ("\nTamanho do Tipo Long Long Int: %llu %s\n", sizeof(long long), sizeof(long long) > 1 ? "bytes" : "byte");
 printf ("\nTamanho do Tipo Long Double: %llu %s\n", sizeof(long double), sizeof(long double) > 1 ? "bytes" : "byte");

 /*Retorna que a função foi executada sem erros.*/
 return SUCESSO;
}