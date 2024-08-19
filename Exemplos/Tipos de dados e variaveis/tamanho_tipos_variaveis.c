
#include <stdio.h>
#include <stdlib.h>

#include "cores.h"
#include "header_tamanho_tipos_variaveis.h"


/*Cabecalho da funcao "ExibirCabecalho".*/
void
ExibirCabecalho(us numeroColunas)
{
	/*Inicializacao das Variaveis.*/
	int coluna, linha;
	int calculoCentena, calculoDezena, calculoUnidade;
	
	/*Estrutura de Repecao que passa pelas linhas das centenas, dezenas e unidades do número inserido. As linhas"0", "1" e "2" correspondem as centenas, dezenas e unidades, respectivamente.*/
	for(linha = 0; linha <= 2; linha++)
	{
		/*Estrutura de Repeticao que passa por todas as colunas desejadas. A variavel "coluna" representa cada coluna e tem seu valor incrementado até atingir a quantidad inserida pelo usuário.*/
		for(coluna = 0; coluna < numeroColunas; coluna++)
		{
			/*Calculos da centena, dezena e unidade de cada coluna do laco de repeticao.*/
			calculoCentena = coluna / 100;
			calculoDezena = (coluna / 10) % 10;
			calculoUnidade = coluna % 10;
			
			/*Como a linha 0 representa a linhas das centenas, a variavel "calculoCentena" � impressa.*/
			if (linha == 0)
			{
				printf ("%s%s%d%s%s%s", BLACK, WHITE_BACKGROUND, calculoCentena, BLACK, WHITE_BACKGROUND, RESET);
			}
			
			/*Como a linha 1 representa a linha das dezenas, a variavel "calculoDezena" é impressa.*/
			if (linha == 1)
			{
				printf ("%s%s%d%s%s%s", BLACK, WHITE_BACKGROUND, calculoDezena, BLACK, WHITE_BACKGROUND, RESET);
			}
			
			/*Como a linha 2 representa a linha das unidades, a variavel "calculoUnidade" é impressa.*/
			if (linha == 2)
			{
				printf ("%s%s%d%s%s%s", BLACK, WHITE_BACKGROUND, calculoUnidade, BLACK, WHITE_BACKGROUND, RESET);
			}
		}

		/*Quebra de linha entre as linhas de centena, dezena e unidade.*/
		printf ("\n");

	}
}


/*Cabecalho da funcao "ExibirHifens".*/
void
ExibirHifens(us numeroHifens)
{	
	/*Iniciacao das Variaveis "coluna" e "linha".*/
	int coluna;
	int linha;
	
	/*Estrutura de Repeticao que passa pelas linhas em branco e pela linha que contem os hifens. As linhas "0", "1" e "2" correspondem ao espaco em branco, hifens e espaco em branco, respectivamente.*/
	for(linha = 0; linha <= 2; linha++)
	{	
		/*Estrutura de Repeticao que gera a quantidade de hifens requisitada, onde a variavel "coluna" representa a numeracao da coluna de cada hifen que sera exibido.*/
		for(coluna = 0; coluna < numeroHifens; coluna++)
		{
			if (linha == 0)
			{	
				/*Impressao da primeira linha em branco, possuindo um fundo preto.*/
				printf ("%s%s%s", BLACK_BACKGROUND, BLACK_BACKGROUND, RESET);
			}

			if (linha == 1)
			{	
				/*Impressao da linha que contem os hifens, possuindo um fundo preto e uma fonte de texto branca.*/
				printf ("%s%s-%s%s%s", WHITE, BLACK_BACKGROUND, WHITE, BLACK_BACKGROUND, RESET);
			}

			if (linha == 2)
			{	
				/*Impressao da segunda linha em branco, possuindo um fundo preto.*/
				printf ("%s%s%s", BLACK_BACKGROUND, BLACK_BACKGROUND, RESET);		
			}
		}
				
		/*Quebra de linha entre as linhas dos espacos em branco e dos hifens.*/
		printf ("\n");

	}
}


/* $RCSfile: aula0101.c,v $ */
