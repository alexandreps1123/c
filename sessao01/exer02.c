/*  Programa que pega dois numeros 'num1' e 'num2'
    e imprime a media aritmetica deles. */

#include <stdio.h>

int main() {

    int num1, num2;
    float media;

    //  Pega o num1
    scanf("%d", &num1);
    //  Pega o num2
    scanf("%d", &num2);

    //  faz a media de num1 e num2
    media = (num1 + num2)/2.0;

    //  imprime a media entre num1 e num2
    printf("%.2f\n", media);

    return 0;
}