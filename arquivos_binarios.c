/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Arquivos.
*/

#include <stdio.h>

typedef struct {
    int id;
    float valor;
    char nome[50];
} Registro;

int main() {
    FILE *file;
    Registro dados[2] = {
        {1, 123.45, "Primeiro"},
        {2, 678.90, "Segundo"}
    };
    Registro lidos[2];

    // Abrir o arquivo para escrita binária
    file = fopen("teste_binario.dat", "wb");
    if (file == NULL) {
        perror("Não foi possível abrir o arquivo para escrita");
        return 1;
    }

    // Escrever dados binários no arquivo
    fwrite(dados, sizeof(Registro), 2, file);

    // Fechar o arquivo
    fclose(file);

    // Abrir o arquivo para leitura binária
    file = fopen("teste_binario.dat", "rb");
    if (file == NULL) {
        perror("Não foi possível abrir o arquivo para leitura");
        return 1;
    }

    // Ler dados binários do arquivo
    fread(lidos, sizeof(Registro), 2, file);

    // Fechar o arquivo
    fclose(file);

    // Exibir os dados lidos
    printf("Dados lidos do arquivo:\n");
    for (int i = 0; i < 2; i++) {
        printf("ID: %d, Valor: %.2f, Nome: %s\n", lidos[i].id, lidos[i].valor, lidos[i].nome);
    }

    return 0;
}
