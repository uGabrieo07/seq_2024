#include <stdio.h>

int main() {
    char str[100];
    int num1, num2;
    char ch;

    // Abrir o arquivo para leitura
    FILE *file = fopen("exemplo_leitura.txt", "r");
    if (file == NULL) {
        perror("Nao foi possivel abrir o arquivo");
        return 1;
    }

    // Usando fscanf para ler dois inteiros
    fscanf(file, "%d %d", &num1, &num2);
    printf("Usando fscanf: %d %d\n", num1, num2);

    // Pular para a próxima linha após fscanf
    fgetc(file);  // Ler o caractere '\n'

    // Usando fgets para ler uma linha inteira
    if (fgets(str, sizeof(str), file) != NULL) {
        printf("Usando fgets: %s", str);
    }

    // Pular para o próximo caractere
    fgetc(file);  // Ler o caractere '\n'

    // Usando fgetc para ler caractere por caractere
    printf("Usando fgetc: ");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    // Fechar o arquivo
    fclose(file);

    return 0;
}
