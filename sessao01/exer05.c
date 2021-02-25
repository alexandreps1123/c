/*
le os valores dos dois catetos de um triangulo retangulo e retorna o valor da hipotenusa
*/

#include <stdio.h>
#include <math.h>

int main(){
    float cateto1, cateto2, hipotenusa;

    printf("Informe os valores do catetos do triangulo retangulo:\n");
    scanf("%f", &cateto1);
    scanf("%f", &cateto2);

    hipotenusa = sqrt(pow(cateto1, 2)+pow(cateto2, 2));

    printf("A hipotenusa eh: %.2f\n", hipotenusa);

    return 0;
}