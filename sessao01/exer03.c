/*  Calculo do volume de um cilindro    */

#include <stdio.h>

int main() {

    float raio, altura, volume;
    float pi = 3.14;

    printf("Informe o valor de raio: ");
    scanf("%f", &raio);
    printf("Informe o valor de altura: ");
    scanf("%f", &altura);

    volume = pi*raio*raio*altura;

    printf("O volume de um cilindro de raio %.2f e altura %.2f é : %.2f\n", raio, altura, volume);

    return 0; 
}