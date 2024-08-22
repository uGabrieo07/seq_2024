/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Operadores e Expressões - Operadores Bit a Bit.
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
 printf ("\n\t\t-----OPERADORES BIT A BIT-----\n");
 /*
 *                                   Tabelas Verdade dos Operadores Lógicos
 * TABELA VERDADE - AND (&)       TABELA VERDADE - OR (|)        TABELA VERDADE - XOR (^)       TABELA VERDADE - NOT (~)
 *   0        0        0            0        0        0            0        0        0                0        1
 *   0        1        0            0        1        1            0        1        1                1        0
 *   1        0        0            1        0        1            1        0        1
 *   1        1        1            1        1        1            1        1        0
 */

 /*                                       Regra do Complemento de Dois
  *             Exemplo:
  *                                     Como representar -237 em binário?
  *                  Primeiro, devemos pegar o número positivo 237 e transformá-lo em binário.
  *                                              237 = 11101101
  *                  Em seguida, usamos o operador NOT Bit a Bit (~) em cada um dos seus bits.
  *                                          11101101 --> 00010010
  *                  Por fim, somamos o valor em binário encontrado com 1 binário (00000001).
  *                                                 00010010
  *                                               + 00000001
  *                                                 --------
  *                                   Resultado --> 00010011 = -237.
  */

 /*Exemplos de cada operador.*/
 printf ("\nAND (&) --> %d & %d = %d\n", 84, 175, 84 & 175); /*84 = 01010100; 175 = 10101111; 84 & 175 = 00000100 = 4.*/
 printf ("\nOR (|) --> %d | %d = %d\n", 82, 139, 82 | 139); /*82 = 01010010; 139 = 10001011; 82 | 139 = 11011011 = 219.*/
 printf ("\nXOR (^) --> %d ^ %d = %d\n", 210, 217, 210 ^ 217); /*210 = 11010010; 217 = 11011001; 210 ^ 217 = 00001011 = 11.*/
 printf ("\nNOT(~) --> ~%d = %d\n", 236, ~236); /*236 = 11101100; ~236 = 00010011 = -237.*/
 printf ("\nDESLOCAMENTO PARA ESQUERDA (<<) --> %d << %d = %d\n", 19, 3, 19 << 3); /*19 = 00010011; 19 << 3 = 10011000 = 152.*/
 printf ("\nDESLOCAMENTO PARA DIREITA (>>) --> %d >> %d = %d\n", 19, 3, 19 >> 3); /*19 = 00010011; 19 >> 3 = 00000010 = 2.*/

 /*Retorna que a função foi executada sem erros.*/
 return SUCESSO;
}