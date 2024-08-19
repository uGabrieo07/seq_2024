/*
* SEQ 2024.
* Liga Acadêmica: for_code.
* Mini curso: Introdução a C.
* Ministrantes: João Vitor dos Santos Oliveira e Gabriel Souza de Paula Oliveira.
* Monitora: Anna Gabriela Brum.
* Data: 21/08/2024.
* Tópico: Structs.
*/

#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 100

// Definição da struct Livro
typedef struct {
    char titulo[100];
    char autor[50];
    int ano_publicacao;
    int id;
} Livro;

// Definição da struct Biblioteca
typedef struct {
    Livro livros[MAX_LIVROS];
    int contador;
} Biblioteca;

// Função para adicionar um livro à biblioteca
void adicionarLivro(Biblioteca *bib, char *titulo, char *autor, int ano, int id) {
    if (bib->contador < MAX_LIVROS) {
        Livro novoLivro;
        strcpy(novoLivro.titulo, titulo);
        strcpy(novoLivro.autor, autor);
        novoLivro.ano_publicacao = ano;
        novoLivro.id = id;

        bib->livros[bib->contador] = novoLivro;
        bib->contador++;
    } else {
        printf("Biblioteca cheia! Não é possivel adicionar mais livros.\n");
    }
}

// Função para listar todos os livros na biblioteca
void listarLivros(Biblioteca *bib) {
    printf("Lista de Livros na Biblioteca:\n");
    printf("------------------------------\n");
    for (int i = 0; i < bib->contador; i++) {
        Livro livro = bib->livros[i];
        printf("ID: %d\n", livro.id);
        printf("Titulo: %s\n", livro.titulo);
        printf("Autor: %s\n", livro.autor);
        printf("Ano de Publicacao: %d\n", livro.ano_publicacao);
        printf("------------------------------\n");
    }
}

int main() {
    // Inicializando a biblioteca
    Biblioteca minhaBiblioteca;
    minhaBiblioteca.contador = 0;

    // Adicionando livros à biblioteca
    adicionarLivro(&minhaBiblioteca, "1984", "George Orwell", 1949, 1);
    adicionarLivro(&minhaBiblioteca, "O Senhor dos Aneis", "J.R.R. Tolkien", 1954, 2);
    adicionarLivro(&minhaBiblioteca, "Dom Quixote", "Miguel de Cervantes", 1605, 3);

    // Listando os livros na biblioteca
    listarLivros(&minhaBiblioteca);

    return 0;
}

