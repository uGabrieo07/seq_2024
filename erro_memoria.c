#include  <stdio.h>

int main(){
    int contador[10]; //index vai de 0 a 9

    int index;
    for (index = 0; index < 100; index++){
        if (index > 9) {
            printf("Erro: limites extrapolados\n");
            return  1;
        }
        contador[index] = index;
    }

    printf("Fim\n");
    return 0;
}