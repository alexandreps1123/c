/*
le os coeficientes de uma equacao de segundo grau a, b e c
depois imprime os valores das raizes reais
instrucao compilar: gcc -Wall -o exer04 exer04.c -lm
          executar: ./exer04

-lm:    parametro necessario para executar a biblioteca math.h
*/
#include <stdio.h>
#include <math.h>// necessaria para sqrt()

int main(){

    float a, b, c, delta, x1, x2, aux;

    printf("Informe os valores dos coeficientes a, b e c:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    /*calculo do discriminante*/
    delta = (b*b) -(4*a*c);
    printf("%f\n", delta);
    if (delta<0){
        /*para delta>0 nao existe raizes reais*/
        printf("Nao existe raizes reais.\n");
    } else if (delta==0){
        /*com delta = 0, significa que as raizes x1 e x2 sao iguais*/
        x1 = -b/(2*a);
        x2 = x1;
        printf("Raizes reais e iguais, x1 = %.2f e x2 = %.2f\n",x1, x2);
    } else {
        aux = sqrt(delta);
        x1 = (-b+aux)/(2*a);
        x2 = (-b-aux)/(2*a);
        printf("Raizes reais e distintas, x1 = %.2f e x2 = %.2f\n",x1, x2);
    }

    return 0;
}
