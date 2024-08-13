#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    char *ptr;

    // 1. strcpy(str1, str2)
    // Copia str2 em str1
    strcpy(str3, str1);
    printf("strcpy: Copiando str1 para str3: str3 = %s\n", str3);

    // 2. strcat(str1, str2)
    // Concatena str2 ao final de str1
    strcat(str1, str2);
    printf("strcat: Concatenando str2 ao final de str1: str1 = %s\n", str1);

    // 3. strlen(str1)
    // Retorna o tamanho de str1
    printf("strlen: Tamanho de str1 = %lu\n", strlen(str1));

    // 4. strcmp(str1, str2)
    // Compara str1 com str2, retorna 0 se forem iguais
    int cmp_result = strcmp(str1, str2);
    if (cmp_result == 0) {
        printf("strcmp: str1 e str2 sao iguais.\n");
    } else if (cmp_result < 0) {
        printf("strcmp: str1 e menor que str2.\n");
    } else {
        printf("strcmp: str1 e maior que str2.\n");
    }

    // 5. strchr(str1, ch)
    // Retorna um ponteiro para a primeira ocorrência do caractere 'o' em str1
    ptr = strchr(str1, 'o');
    if (ptr != NULL) {
        printf("strchr: Primeira ocorrencia do caractere 'o' em str1: %s\n", ptr);
    } else {
        printf("strchr: Caractere 'o' não encontrado em str1.\n");
    }

    // 6. strstr(str1, str2)
    // Retorna um ponteiro para a primeira ocorrência de str2 em str1
    ptr = strstr(str1, str2);
    if (ptr != NULL) {
        printf("strstr: Primeira ocorrencia de str2 em str1: %s\n", ptr);
    } else {
        printf("strstr: str2 nao encontrado em str1.\n");
    }

    return 0;
}
