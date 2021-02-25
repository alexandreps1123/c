/*
dados dois valores imprime o maior entre eles
se iguais imprime uma mensagem informando 
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Informe o 1o valor");
    scanf("%d", &a);
    printf("Informe o 2o valor:");
    scanf("%d", &b);

    if(a>b){
        printf("O maior valor eh: %d\n", a);
    } else if (b>a){
        printf("O maior valor eh: %d\n", b);
    } else{
        printf("Valores iguais: %d\n", a);
    }

    return 0;
}