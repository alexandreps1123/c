/*
pega dois numeros 'x' e 'y'
depois imprime a media aritmetica deles.
*/

#include <stdio.h>

int main() {
    int x, y;
    float media;

    /*Pega o x*/
    scanf("%d", &x);
    /*Pega o y*/
    scanf("%d", &y);

    /*faz a media de x e y, para que possa retornar um float faz-se necessario dividir por um float, nesse caso '2.0'*/
    media = (x + y)/2.0;

    /*imprime a media entre num1 e y*/
    printf("%.2f\n", media);

    return 0;
}