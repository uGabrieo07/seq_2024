/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Funções.
*/

#include <limits.h>
#include <math.h>
#include "exponencial_cabecalho.h"

ld
CalcularExponencial (double base, int expoente)
{	

	if (base == 0 && expoente == 0){
		return 1;
	}

	if (base == 0 && expoente < 0){
		return HUGE_VAL;
	}

	if (base != 0 && expoente == 0 ){
		return 1;
	}

	if (base != 0 && expoente < 0){
		return 1 / (base * CalcularExponencial (base, -1 * expoente - 1));	
	}
	
	return base * CalcularExponencial (base, expoente - 1);
}

















/* $RCSfile: aula0401a.c,v $ */
