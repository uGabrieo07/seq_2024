/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Manipulação de Arquivos.
*/

#include <stdio.h>

int main() {
    FILE *file;

    // Abrir o arquivo para escrita
    file = fopen("exemplo_escrita.txt", "w");
    if (file == NULL) {
        perror("Não foi possível abrir o arquivo");
        return 1;
    }

    // Usando fputs para escrever uma string no arquivo
    fputs("Esta é uma linha escrita com fputs.\n", file);

    // Usando fputc para escrever um caractere no arquivo
    fputc('A', file);
    fputc('\n', file);  // Adiciona uma nova linha

    // Usando fprintf para escrever uma string formatada no arquivo
    fprintf(file, "Número inteiro: %d\n", 123);
    fprintf(file, "Número de ponto flutuante: %.2f\n", 456.78);

    // Fechar o arquivo
    fclose(file);

    printf("Dados escritos no arquivo teste_saida.txt\n");

    return 0;
}
