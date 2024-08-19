/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Operadores Aritméticos.
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
 /*Declaração da variável "numero1" do tipo "int" (inteiro).*/
 int numeroInteiro = 50;

 /*Declaração da variável "numero2" do tipo "float" (real).*/
 float numeroReal = 9.768;

 /*Declaração das variáveis que armazenam os valores inteiros da soma, subtração, multiplicação,
  *divisão e resto de divisão das variáveis "numeroInteiro" e "numeroReal".*/
 int resultadoInteiroSoma, resultadoInteiroSubtracao, resultadoInteiroMultiplicacao, resultadoInteiroDivisao;

 /*Declaração das variáveis que armazenam os valores reais da soma, subtração, multiplicação,
  *divisão e resto da divisão das variáveis "numeroInteiro" e "numeroReal".*/
 float resultadoRealSoma, resultadoRealSubtracao, resultadoRealMultiplicacao, resultadoRealDivisao;

 /*Declaração da variável que armazena o valor do resto da divisão do valor da variável "numeroInteiro" por 7.*/
 int resultadoRestoDivisao;

 printf ("\n\t\t-----OPERADORES ARITMETICOS-----\n");

 /*Utilização do operador aritmético "+" para somar o valor inteiro da variável "numeroInteiro"
  *ao valor real da variável "numeroReal".*/
 resultadoInteiroSoma = numeroInteiro + numeroReal;
 resultadoRealSoma = numeroInteiro + numeroReal;

 /*Utilização da função "printf" para imprimir os valores das duas somas.
  * OBS: O Especificador de Precisão ".3" dentro do "%.3f" determina que
  * o número será impresso com apenas três casa decimal apos a vírgula.*/
 printf ("\nResultado inteiro da soma dos numeros %d e %.3f: %d\n", numeroInteiro, numeroReal, resultadoInteiroSoma);
 printf ("Resultado real da soma dos numeros %d e %.3f: %.3f\n", numeroInteiro, numeroReal, resultadoRealSoma);

 /*Utilização do operador aritmético "-" para subtrair o valor inteiro da variável "numeroInteiro"
  *pelo valor real da variável "numeroReal".*/
 resultadoInteiroSubtracao = numeroInteiro - numeroReal;
 resultadoRealSubtracao = numeroInteiro - numeroReal;

 /*Utilização da função "printf" para imprimir os valores das duas subtrações.*/
 printf ("\nResultado inteiro da subtracao dos numeros %d e %.3f: %d\n", numeroInteiro, numeroReal, resultadoInteiroSubtracao);
 printf ("Resultado real da subtracao dos numeros %d e %.3f: %.1f\n", numeroInteiro, numeroReal, resultadoRealSubtracao);

 /*Utilização do operador aritmético "*" para multiplicar o valor inteiro da variável "numeroInteiro"
  *pelo valor real da variável "numeroReal".*/
 resultadoInteiroMultiplicacao = numeroInteiro * numeroReal;
 resultadoRealMultiplicacao = numeroInteiro * numeroReal;

 /*Utilização da função "printf" para imprimir os valores das duas multiplicações.*/
 printf ("\nResultado inteiro da multiplicacao dos numeros %d e %.3f: %d\n", numeroInteiro, numeroReal, resultadoInteiroMultiplicacao);
 printf ("Resultado real da multiplicacao dos numeros %d e %.3f: %.1f\n", numeroInteiro, numeroReal, resultadoRealMultiplicacao);

 /*Utilização do operador aritmético "/" para dividir o valor inteiro da variável "numeroInteiro"
  *pelo valor real da variável "numeroReal".*/
 resultadoInteiroDivisao = numeroInteiro / numeroReal;
 resultadoRealDivisao = numeroInteiro / numeroReal;

 /*Utilização da função "printf" para imprimir os valores das duas divisões.*/
 printf ("\nResultado inteiro da divisao dos numeros %d e %.3f: %d\n", numeroInteiro, numeroReal, resultadoInteiroDivisao);
 printf ("Resultado real da divisao dos numeros %d e %.3f: %f\n", numeroInteiro, numeroReal, resultadoRealDivisao);

 /*Utilização do operador aritmético "%" para obter o resto da divisão do valor inteiro da variável "numeroInteiro" por 7.
  * OBS: O operador "%" somente pode ser utilizado entre dois valores inteiros.*/
 resultadoRestoDivisao = numeroInteiro % 7;

 /*Utilização da função "printf" para imprimir o valor do resto de divisão.*/
 printf ("\nResultado do resto da divisao do numero %d por 7: %d\n", numeroInteiro, resultadoRestoDivisao);

 /*Formas Reduzidas dos Operadores Aritméticos.*/
 printf ("\n\t\t-----FORMAS REDUZIDAS-----\n");
 printf ("\nForma Reduzida do Operador de Soma --> %d += %d: ", numeroInteiro, 3);
 numeroInteiro += 3;
 printf ("%d\n", numeroInteiro);

 printf ("\nForma Reduzida do Operador de Subtracao --> %.3f -= %.2f: ", numeroReal, 3.45);
 numeroReal -= 3.45;
 printf ("%.3f\n", numeroReal);

 printf ("\nForma Reduzida do Operador de Multiplicacao --> %d *= %d: ", numeroInteiro, 345);
 numeroInteiro *= 345;
 printf ("%d\n", numeroInteiro);

 printf ("\nForma Reduzida do Operador de Divisao --> %.3f /= %.3f: ", numeroReal, 0.678);
 numeroReal /= 0.678;
 printf ("%f\n", numeroReal);

 printf ("\nForma Reduzida do Operador de Resto de Divisao --> %d %c= %d: ", numeroInteiro, '%', 45);
 numeroInteiro %= 45;
 printf ("%d\n", numeroInteiro);

 /*Operações Aritméticas Equivalentes.*/
 printf ("\n\t\t-----OPERACOES EQUIVALENTES-----\n");
 printf ("\n\t%d = %d + %d: %d", numeroInteiro, numeroInteiro, 1, numeroInteiro + 1);
 printf ("\t\t\t%d = %d - %d: %d\n", numeroInteiro, numeroInteiro, 1, numeroInteiro - 1);

 printf ("\n\t  %d += %d: ", numeroInteiro, 1);
 numeroInteiro += 1;
 printf ("%d", numeroInteiro);
 numeroInteiro -= 1;
 printf ("\t\t\t  %d -= %d: ", numeroInteiro, 1);
 numeroInteiro -= 1;
 printf ("%d\n", numeroInteiro);

 numeroInteiro += 1;
 printf ("\n\t  ++%d = ", numeroInteiro);
 ++numeroInteiro;
 printf ("%d", numeroInteiro);
 --numeroInteiro;
 printf ("\t\t\t  --%d = ", numeroInteiro);
 --numeroInteiro;
 printf ("%d\n", numeroInteiro);

 ++numeroInteiro;
 printf ("\n\t  %d++ = ", numeroInteiro);
 numeroInteiro++;
 printf ("%d", numeroInteiro);
 numeroInteiro--;
 printf ("\t\t\t  %d-- = ", numeroInteiro);
 numeroInteiro--;
 printf ("%d\n", numeroInteiro);

 /*Retorna que a função foi executada sem erros.*/
 return SUCESSO;
}