/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Casts.
*/

#include <stdio.h>

#define SUCESSO             0

/*Função Principal.*/
int
main ()
{
    /*Declaração das variáveis.*/
    int numeroInteiro = 10;
    float numeroFloat = 5.5;
    long long numeroLongLong = 1000000000000;

    /*Conversões de tipos utilizando Casts.*/
    float castFloat = (float) (numeroInteiro + numeroFloat);
    int castInt =  (int) (numeroInteiro + numeroFloat);
    long long castLongLong = (long long) (numeroInteiro + numeroLongLong);
    unsigned castUnsigned = (unsigned) (numeroInteiro + numeroLongLong);

    /*Impressão dos resultados dos Casts.*/
    printf ("\n\t\t-----CASTS-----\n\n");
    printf ("Resultado com Cast para o tipo Float: %.1f\n", castFloat);
    printf ("Resultado com Cast para o tipo Int: %d\n", castInt);
    printf ("Resultado com Cast para o tipo Long Long: %llu\n", castLongLong);
    printf ("Resultado com Cast para o tipo Unsigned Int: %u\n\n", castUnsigned);

    return SUCESSO;
}