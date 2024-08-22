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
#include <stdlib.h>
#include "cores.h"
#include "header_tamanho_tipos_variaveis.h"

/*Definicao das Macros.*/
#define SUCESSO				0
#define TABULACAO_DAS_COLUNAS		1


/*Inicializacao da Funcao Principal.*/
int
main(int argc, char *argv [])
{
	/*Inicializacao das Variaveis que representam as linhas e colunas da tela, respectivamente.*/
	int linha, coluna;
	
	/*Inicializacao das Variaveis correspondentes ao Tamanho de cada Tipo e de suas combinacoes.*/
	int tamanhoTipoVoid, tamanhoTipoChar, tamanhoTipoInt, tamanhoTipoFloat;
	int tamanhoTipoDouble, tamanhoTipoSigned, tamanhoTipoUnsigned;
	int tamanhoTipoShort, tamanhoTipoLong, tamanhoTipoLongLong;

	int tamanhoTipoSignedShort, tamanhoTipoSignedLong, tamanhoTipoSignedLongLong;
	int tamanhoTipoUnsignedShort, tamanhoTipoUnsignedLong, tamanhoTipoUnsignedLongLong;

	int tamanhoTipoSignedChar, tamanhoTipoSignedInt;
	int tamanhoTipoUnsignedChar, tamanhoTipoUnsignedInt;

	int tamanhoTipoShortInt, tamanhoTipoLongInt;
	int tamanhoTipoLongDouble, tamanhoTipoLongLongInt;

	int tamanhoTipoSignedShortInt, tamanhoTipoSignedLongInt, tamanhoTipoSignedLongLongInt;
	int tamanhoTipoUnsignedShortInt, tamanhoTipoUnsignedLongInt, tamanhoTipoUnsignedLongLongInt;
	
	/*Inicializacao das Variaveis correspondentes aos argumentos que entrarao no "printf", sendo eles "byte" ou "bytes".
	 * OBS: Como os argumentos recebem uma "string", as variaveis tem de ser um ponteiro para "char". 
	 * 	Pois, elas apontarao para o endereco de memoria do primeiro caractere da "string" recebida, acessando assim o restante dos caracteres.*/
	char *argumentoByteVoid, *argumentoByteChar, *argumentoByteInt, *argumentoByteFloat;
	char *argumentoByteDouble, *argumentoByteSigned, *argumentoByteUnsigned;
	char *argumentoByteShort, *argumentoByteLong, *argumentoByteLongLong;

	char *argumentoByteSignedShort, *argumentoByteSignedLong, *argumentoByteSignedLongLong;
	char *argumentoByteUnsignedShort, *argumentoByteUnsignedLong, *argumentoByteUnsignedLongLong;

	char *argumentoByteSignedChar, *argumentoByteSignedInt;
	char *argumentoByteUnsignedChar, *argumentoByteUnsignedInt;

	char *argumentoByteShortInt, *argumentoByteLongInt;
	char *argumentoByteLongDouble, *argumentoByteLongLongInt;

	char *argumentoByteSignedShortInt, *argumentoByteSignedLongInt, *argumentoByteSignedLongLongInt;
	char *argumentoByteUnsignedShortInt, *argumentoByteUnsignedLongInt, *argumentoByteUnsignedLongLongInt;
	
	/*A partir da funcao "sizeof", cada tamanho e armazenado em suas respectivas variaveis.*/
	tamanhoTipoVoid = sizeof(void); 
	tamanhoTipoChar = sizeof(char); 	
	tamanhoTipoInt = sizeof(int); 
	tamanhoTipoFloat = sizeof(float);
	tamanhoTipoDouble = sizeof(double);      	
	tamanhoTipoSigned = sizeof(signed);
	tamanhoTipoUnsigned = sizeof(unsigned);
	tamanhoTipoShort = sizeof(short);      	
	tamanhoTipoLong = sizeof(long);
	tamanhoTipoLongLong = sizeof(long long);

	tamanhoTipoSignedShort = sizeof(signed short);      	
	tamanhoTipoSignedLong = sizeof(signed long);
	tamanhoTipoSignedLongLong = sizeof(signed long long); 
	tamanhoTipoUnsignedShort = sizeof(unsigned short);      	
	tamanhoTipoUnsignedLong = sizeof(unsigned long);
	tamanhoTipoUnsignedLongLong = sizeof(unsigned long long);
     	
	tamanhoTipoSignedChar = sizeof(signed char);      	
	tamanhoTipoSignedInt = sizeof(signed int);         	
	tamanhoTipoUnsignedChar = sizeof(unsigned char);      	
	tamanhoTipoUnsignedInt = sizeof(unsigned int); 

	tamanhoTipoShortInt = sizeof(short int);
	tamanhoTipoLongInt = sizeof(long int);
	tamanhoTipoLongDouble = sizeof(long double);
	tamanhoTipoLongLongInt = sizeof(long long int);

	tamanhoTipoSignedShortInt = sizeof(signed short int);         	
	tamanhoTipoSignedLongInt = sizeof(signed long int);         	
	tamanhoTipoSignedLongLongInt = sizeof(signed long long int);  
	tamanhoTipoUnsignedShortInt = sizeof(unsigned short int);         	
	tamanhoTipoUnsignedLongInt = sizeof(unsigned long int);         	
	tamanhoTipoUnsignedLongLongInt = sizeof(unsigned long long int);         	
	
	/*Variaveis que armazenam os argumentos que entrarao no "printf" de cada Tipo.*/
	/*Caso o tamanho do tipo for maior que "1", o argumento entrara no "printf" sera "bytes".
	 * Caso for igual a "1", o argumento que entrara no "printf" sera "byte".*/
	argumentoByteVoid = tamanhoTipoVoid > 1? "bytes" : "byte";
	argumentoByteChar = tamanhoTipoChar > 1? "bytes" : "byte";
	argumentoByteInt = tamanhoTipoInt > 1? "bytes" : "byte";
	argumentoByteFloat = tamanhoTipoFloat > 1? "bytes" : "byte";
	argumentoByteDouble = tamanhoTipoDouble > 1? "bytes" : "byte";
	argumentoByteSigned = tamanhoTipoSigned > 1? "bytes" : "byte";
	argumentoByteUnsigned = tamanhoTipoUnsigned > 1? "bytes" : "byte";
	argumentoByteShort = tamanhoTipoShort > 1? "bytes" : "byte";
	argumentoByteLong = tamanhoTipoLong > 1? "bytes" : "byte";
	argumentoByteLongLong = tamanhoTipoLongLong > 1? "bytes" : "byte";

	argumentoByteSignedShort = tamanhoTipoSignedShort > 1? "bytes" : "byte";
	argumentoByteSignedLong = tamanhoTipoSignedLong > 1? "bytes" : "byte";
	argumentoByteSignedLongLong = tamanhoTipoSignedLongLong > 1? "bytes" : "byte";
	argumentoByteUnsignedShort = tamanhoTipoUnsignedShort > 1? "bytes" : "byte";
	argumentoByteUnsignedLong = tamanhoTipoUnsignedLong > 1? "bytes" : "byte";
	argumentoByteUnsignedLongLong = tamanhoTipoUnsignedLongLong > 1? "bytes" : "byte";

	argumentoByteSignedChar = tamanhoTipoSignedChar > 1? "bytes" : "byte";
	argumentoByteSignedInt = tamanhoTipoSignedInt > 1? "bytes" : "byte";
	argumentoByteUnsignedChar = tamanhoTipoUnsignedChar > 1? "bytes" : "byte";
	argumentoByteUnsignedInt = tamanhoTipoUnsignedInt > 1? "bytes" : "byte";

	argumentoByteShortInt = tamanhoTipoShortInt > 1? "bytes" : "byte";
	argumentoByteLongInt = tamanhoTipoLongInt > 1? "bytes" : "byte";
	argumentoByteLongDouble = tamanhoTipoLongDouble > 1? "bytes" : "byte";
	argumentoByteLongLongInt = tamanhoTipoLongLongInt > 1? "bytes" : "byte";

	argumentoByteSignedShortInt = tamanhoTipoSignedShortInt > 1? "bytes" : "byte";
	argumentoByteSignedLongInt = tamanhoTipoSignedLongInt > 1? "bytes" : "byte";
	argumentoByteSignedLongLongInt = tamanhoTipoSignedLongLongInt > 1? "bytes" : "byte";
	argumentoByteUnsignedShortInt = tamanhoTipoUnsignedShortInt > 1? "bytes" : "byte";
	argumentoByteUnsignedLongInt = tamanhoTipoUnsignedLongInt > 1? "bytes" : "byte";
	argumentoByteUnsignedLongLongInt = tamanhoTipoUnsignedLongLongInt > 1? "bytes" : "byte";

	/*Funcao que exibe uma certa quantidade de hifens, sendo ela inserida dentro dos parenteses.
	 * Nesse caso, exibem-se "100" hifens.*/
	ExibirHifens(100);
	
	/*Exibicao do titulo referente aos Tamanhos dos Tipos Basicos.*/
	printf ("Tamanhos dos Tipos Basicos\n\n");
	
	/*Estrutura de Repeticao que passa pelas linhas de cada Tipo Basico, sendo cada linha representada por "linha".*/
	for(linha = 0; linha <= 4; linha++)
	{	
		/*Estrutura de Repeticao que passa por todas as colunas da tela, senda cada coluna representada por "coluna".*/
		for(coluna = 0; coluna <= 99; coluna++)
		{
			/*O Tipo Basico "void" e seu tamanho sao exibidos na primeira linha.*/
			if (linha == 0)
			{
				if (coluna == 0)
					printf ("void:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoVoid, argumentoByteVoid);
				
				if ((coluna > 4) && (coluna < 92))
					printf (" ");
			}
			
			/*O Tipo Basico "char" e seu tamanho sao exibidos na segunda linha.*/
			if (linha == 1)
			{
				if (coluna == 0)
					printf ("char:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoChar, argumentoByteChar);
				
				if ((coluna > 4) && (coluna < 92))
					printf (" ");
			}
			
			/*O Tipo Basico "int" e seu tamanho sao exibidos na terceira linha.*/
			if (linha == 2)
			{
				if (coluna == 0)
					printf ("int:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoInt, argumentoByteInt);
				
				if ((coluna > 3) && (coluna < 92))
					printf (" ");
			}
			
			/*O Tipo Basico "float" e seu tamanho sao exibidos na quarta linha.*/
			if (linha == 3)
			{
				if (coluna == 0)
					printf ("float:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoFloat, argumentoByteFloat);
				
				if ((coluna > 5) && (coluna < 92))
					printf (" ");
			}
			
			/*O Tipo Basico "double" e seu tamanho sao exibidos na quinta linha.*/
			if (linha == 4)
			{
				if (coluna == 0)
					printf ("double:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoDouble, argumentoByteDouble);
				
				if ((coluna > 6) && (coluna < 92))
					printf (" ");
			}
		}
	}

	/*Funcao que exibe uma certa quantidade de hifens, sendo ela inserida dentro dos parenteses.
	 * Nesse caso, exibem-se "100" hifens.*/
	ExibirHifens(100);
	
	/*Exibicao do titulo referente aos Tamanhos dos Modificadores de Sinal.*/
	printf ("Tamanhos dos Modificadores de Sinal\n\n");
	
	/*Estrutura de Repeticao que passa pelas linhas de cada Modificador de Sinal, sendo cada linha representada por "linha".*/
	for(linha = 0; linha <= 1; linha++)
	{	
		/*Estrutura de Repeticao que passa por todas as colunas da tela, senda cada coluna representada por "coluna".*/
		for(coluna = 0; coluna <= 99; coluna++)
		{
			/*O Modificador de Sinal "signed" e seu tamanho sao exibidos na primeira linha.*/
			if (linha == 0)
			{
				if (coluna == 0)
					printf ("signed:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoSigned, argumentoByteSigned);
				
				if ((coluna > 6) && (coluna < 92))
					printf (" ");
			}
			
			/*O Modificador de Sinal "unsigned" e seu tamanho sao exibidos na segunda linha.*/
			if (linha == 1)
			{
				if (coluna == 0)
					printf ("unsigned:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoUnsigned, argumentoByteUnsigned);
				
				if ((coluna > 8) && (coluna < 92))
					printf (" ");
			}	
		}
	}

	/*Funcao que exibe uma certa quantidade de hifens, sendo ela inserida dentro dos parenteses.
	 * Nesse caso, exibem-se "100" hifens.*/
	ExibirHifens(100);
	
	/*Exibicao do titulo referente aos Tamanhos dos Modificadores de Largura.*/
	printf ("Tamanhos dos Modificadores de Largura\n\n");

	/*Estrutura de Repeticao que passa pelas linhas de cada Modificador de Largura, sendo cada linha representada por "linha".*/
	for(linha = 0; linha <= 2; linha++)
	{	
		/*Estrutura de Repeticao que passa por todas as colunas da tela, senda cada coluna representada por "coluna".*/
		for(coluna = 0; coluna <= 99; coluna++)
		{
			/*O Modificador de Largura "short" e seu tamanho sao exibidos na primeira linha.*/
			if (linha == 0)
			{
				if (coluna == 0)
					printf ("short:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoShort, argumentoByteShort);
				
				if ((coluna > 5) && (coluna < 92))
					printf (" ");
			}
			
			/*O Modificador de Largura "long" e seu tamanho sao exibidos na segunda linha.*/
			if (linha == 1)
			{
				if (coluna == 0)
					printf ("long:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoLong, argumentoByteLong);
				
				if ((coluna > 4) && (coluna < 92))
					printf (" ");
			}
			
			/*O Modificador de Largura "long long" e seu tamanho sao exibidos na terceira linha.*/
			if (linha == 2)
			{
				if (coluna == 0)
					printf ("long long:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoLongLong, argumentoByteLongLong);
				
				if ((coluna > 9) && (coluna < 92))
					printf (" ");
			}	
		}
	}
	
	/*Funcao que exibe uma certa quantidade de hifens, sendo ela inserida dentro dos parenteses.
	 * Nesse caso, exibem-se "100" hifens.*/
	ExibirHifens(100);
		
	/*Exibicao do titulo referente aos Tamanhos dos Modificadores de Sinal combinados com Modificadores de Largura.*/
	printf ("Tamanhos dos Modificadores de Sinal combinados com Modificadores de Largura\n\n");
	
	/*Estrutura de Repeticao que passa pelas linhas de cada Modificador de Sinal combinado com Modificador de Largura, sendo cada linha representada por "linha".*/
	for(linha = 0; linha <= 5; linha++)
	{	
		/*Estrutura de Repeticao que passa por todas as colunas da tela, senda cada coluna representada por "coluna".*/
		for(coluna = 0; coluna <= 99; coluna++)
		{
			/*O Modificador de Sinal combinado com o Modificador de Largura "signed short" e seu tamanho sao exibidos na primeira linha.*/
			if (linha == 0)
			{
				if (coluna == 0)
					printf ("signed short:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoSignedShort, argumentoByteSignedShort);
				
				if ((coluna > 12) && (coluna < 92))
					printf (" ");
			}
			
			/*O Modificador de Sinal combinado com o Modificador de Largura "signed long" e seu tamanho sao exibidos na segunda linha.*/
			if (linha == 1)
			{
				if (coluna == 0)
					printf ("signed long:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoSignedLong, argumentoByteSignedLong);
				
				if ((coluna > 11) && (coluna < 92))
					printf (" ");
			}
			
			/*O Modificador de Sinal combinado com o Modificador de Largura "signed long long" e seu tamanho sao exibidos na terceira linha.*/
			if (linha == 2)
			{
				if (coluna == 0)
					printf ("signed long long:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoSignedLongLong, argumentoByteSignedLongLong);
				
				if ((coluna > 16) && (coluna < 92))
					printf (" ");
			}
			
			/*O Modificador de Sinal combinado com o Modificador de Largura "unsigned short" e seu tamanho sao exibidos na quarta linha.*/
			if (linha == 3)
			{
				if (coluna == 0)
					printf ("unsigned short:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoUnsignedShort, argumentoByteUnsignedShort);
				
				if ((coluna > 14) && (coluna < 92))
					printf (" ");
			}
			
			/*O Modificador de Sinal combinado com o Modificador de Largura "unsigned long" e seu tamanho sao exibidos na quinta linha.*/
			if (linha == 4)
			{
				if (coluna == 0)
					printf ("unsigned long:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoUnsignedLong, argumentoByteUnsignedLong);
				
				if ((coluna > 13) && (coluna < 92))
					printf (" ");
			}

			/*O Modificador de Sinal combinado com o Modificador de Largura "unsigned long long" e seu tamanho sao exibidos na sexta linha.*/
			if (linha == 5)
			{
				if (coluna == 0)
					printf ("unsigned long long:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoUnsignedLongLong, argumentoByteUnsignedLongLong);
				
				if ((coluna > 18) && (coluna < 92))
					printf (" ");
			}
		}
	}
	
	/*Funcao que exibe uma certa quantidade de hifens, sendo ela inserida dentro dos parenteses.
	 * Nesse caso, exibem-se "100" hifens.*/
	ExibirHifens(100);
		
	/*Exibicao do titulo referente aos Tamanhos dos Tipos Basicos combinados com Modificadores de Sinal.*/
	printf ("Tamanhos dos Tipos Basicos combinados com Modificadores de Sinal\n\n");
	
	/*Estrutura de Repeticao que passa pelas linhas de cada Tipo Basico combinado com Modificador de Sinal, sendo cada linha representada por "linha".*/
	for(linha = 0; linha <= 3; linha++)
	{	
		/*Estrutura de Repeticao que passa por todas as colunas da tela, senda cada coluna representada por "coluna".*/
		for(coluna = 0; coluna <= 99; coluna++)
		{			
			/*O Tipo Basico combinado com o Modificador de Sinal "signed char" e seu tamanho sao exibidos na primeira linha.*/
			if (linha == 0)
			{
				if (coluna == 0)
					printf ("signed char:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoSignedChar, argumentoByteSignedChar);
				
				if ((coluna > 11) && (coluna < 92))
					printf (" ");
			}
			
			/*O Tipo Basico combinado com o Modificador de Sinal "signed int" e seu tamanho sao exibidos na segunda linha.*/
			if (linha == 1)
			{
				if (coluna == 0)
					printf ("signed int:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoSignedInt, argumentoByteSignedInt);
				
				if ((coluna > 10) && (coluna < 92))
					printf (" ");
			}
						
			/*O Tipo Basico combinado com o Modificador de Sinal "unsigned char" e seu tamanho sao exibidos na terceira linha.*/
			if (linha == 2)
			{
				if (coluna == 0)
					printf ("unsigned char:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoUnsignedChar, argumentoByteUnsignedChar);
				
				if ((coluna > 13) && (coluna < 92))
					printf (" ");
			}

			/*O Tipo Basico combinado com o Modificador de Sinal "unsigned int" e seu tamanho sao exibidos na quarta linha.*/
			if (linha == 3)
			{
				if (coluna == 0)
					printf ("unsigned int:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoUnsignedInt, argumentoByteUnsignedInt);
				
				if ((coluna > 12) && (coluna < 92))
					printf (" ");
			}
		}
	}

	/*Funcao que exibe uma certa quantidade de hifens, sendo ela inserida dentro dos parenteses.
	 * Nesse caso, exibem-se "100" hifens.*/
	ExibirHifens(100);
		
	/*Exibicao do titulo referente aos Tamanhos dos Tipos Basicos combinados com Modificadores de Largura.*/
	printf ("Tamanhos dos Tipos Basicos combinados com Modificadores de Largura\n\n");
	
	/*Estrutura de Repeticao que passa pelas linhas de cada Tipo Basico combinado com Modificador de Largura, sendo cada linha representada por "linha".*/
	for(linha = 0; linha <= 3; linha++)
	{	
		/*Estrutura de Repeticao que passa por todas as colunas da tela, senda cada coluna representada por "coluna".*/
		for(coluna = 0; coluna <= 99; coluna++)
		{			
			/*O Tipo Basico combinado com o Modificador de Largura "short int" e seu tamanho sao exibidos na primeira linha.*/
			if (linha == 0)
			{
				if (coluna == 0)
					printf ("short int:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoShortInt, argumentoByteShortInt);
				
				if ((coluna > 9) && (coluna < 92))
					printf (" ");
			}
			
			/*O Tipo Basico combinado com o Modificador de Largura "long int" e seu tamanho sao exibidos na segunda linha.*/
			if (linha == 1)
			{
				if (coluna == 0)
					printf ("long int:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoLongInt, argumentoByteLongInt);
				
				if ((coluna > 8) && (coluna < 92))
					printf (" ");
			}
						
			/*O Tipo Basico combinado com o Modificador de Largura "long double" e seu tamanho sao exibidos na terceira linha.*/
			if (linha == 2)
			{
				if (coluna == 0)
					printf ("long double:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoLongDouble, argumentoByteLongDouble);
				
				if ((coluna > 11) && (coluna < 92))
					printf (" ");
			}

			/*O Tipo Basico combinado com o Modificador de Largura "long long int" e seu tamanho sao exibidos na quarta linha.*/
			if (linha == 3)
			{
				if (coluna == 0)
					printf ("long long int:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoLongLongInt, argumentoByteLongLongInt);
				
				if ((coluna > 13) && (coluna < 92))
					printf (" ");
			}
		}
	}
		
	/*Funcao que exibe uma certa quantidade de hifens, sendo ela inserida dentro dos parenteses.
	 * Nesse caso, exibem-se "100" hifens.*/
	ExibirHifens(100);
		
	/*Exibicao do titulo referente aos Tamanhos dos Tipos Basicos combinados com Modificadores de Sinal e com Modificadores de Largura.*/
	printf ("Tamanhos dos Tipos Basicos combinados com Modificadores de Sinal e com Modificadores de Largura\n\n");
	
	/*Estrutura de Repeticao que passa pelas linhas de cada Tipo Basico combinado com Modificador de Sinal e com Modificador de Largura, sendo cada linha representada por "linha".*/
	for(linha = 0; linha <= 5; linha++)
	{	
		/*Estrutura de Repeticao que passa por todas as colunas da tela, senda cada coluna representada por "coluna".*/
		for(coluna = 0; coluna <= 99; coluna++)
		{
			/*O Tipo Basico combinado com Modificador de Sinal e com Modificador de Largura "signed short int" e seu tamanho sao exibidos na primeira linha.*/
			if (linha == 0)
			{
				if (coluna == 0)
					printf ("signed short int:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoSignedShortInt, argumentoByteSignedShortInt);
				
				if ((coluna > 16) && (coluna < 92))
					printf (" ");
			}
			
			/*O Tipo Basico combinado com Modificador de Sinal e com Modificador de Largura "signed long int" e seu tamanho sao exibidos na segunda linha.*/
			if (linha == 1)
			{
				if (coluna == 0)
					printf ("signed long int:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoSignedLongInt, argumentoByteSignedLongInt);
				
				if ((coluna > 15) && (coluna < 92))
					printf (" ");
			}
			
			/*O Tipo Basico combinado com Modificador de Sinal e com Modificador de Largura "signed long long int" e seu tamanho sao exibidos na terceira linha.*/
			if (linha == 2)
			{
				if (coluna == 0)
					printf ("signed long long int:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoSignedLongLongInt, argumentoByteSignedLongLongInt);
				
				if ((coluna > 20) && (coluna < 92))
					printf (" ");
			}
			
			/*O Tipo Basico combinado com Modificador de Sinal e com Modificador de Largura "unsigned short int" e seu tamanho sao exibidos na quarta linha.*/
			if (linha == 3)
			{
				if (coluna == 0)
					printf ("unsigned short int:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoUnsignedShortInt, argumentoByteUnsignedShortInt);
				
				if ((coluna > 18) && (coluna < 92))
					printf (" ");
			}
			
			/*O Tipo Basico combinado com Modificador de Sinal e com Modificador de Largura "unsigned long int" e seu tamanho sao exibidos na quinta linha.*/
			if (linha == 4)
			{
				if (coluna == 0)
					printf ("unsigned long int:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoUnsignedLongInt, argumentoByteUnsignedLongInt);
				
				if ((coluna > 17) && (coluna < 92))
					printf (" ");
			}

			/*O Tipo Basico combinado com Modificador de Sinal e com Modificador de Largura "unsigned long long int" e seu tamanho sao exibidos na sexta linha.*/
			if (linha == 5)
			{
				if (coluna == 0)
					printf ("unsigned long long int:");

				if (coluna == 92)
					printf ("%d %s\n", tamanhoTipoUnsignedLongLongInt, argumentoByteUnsignedLongLongInt);
				
				if ((coluna > 22) && (coluna < 92))
					printf (" ");
			}
		}
	}
	
	/*Funcao que exibe uma certa quantidade de hifens, sendo ela inserida dentro dos parenteses.
	 * Nesse caso, exibem-se "100" hifens.*/
	ExibirHifens(100);

	return SUCESSO;
}

