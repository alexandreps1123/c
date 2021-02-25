/*
o exercicio 3 era o de implementar o calculo de raizer de uma funcao de segundo grau ja foi feito em ./sessao01/exer04.c

le um ponto (x, y), mais uma altura e uma largura, e forma um retangulo com esses dados.
depois, le outro ponto e verifica se este pertence ou nao ao retangulo formado.
*/
#include <stdio.h>

int main(){
    int x, y, altura, largura, a, b;

    printf("Informe as coordenadas do ponto de origem (x, y):\n");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Informe a Altura:");
    scanf("%d", &altura);
    printf("Informe a Largura:");
    scanf("%d", &largura);
    printf("Informe o ponto (x, y) a ser verificado:");
    scanf("%d", &a);
    scanf("%d", &b);

    if ((a >= x && a <= (x+altura)) && (b >= x && b <= (y+largura))){
        printf("ponto (%d, %d) pertence ao retangulo formado.\n", a, b);
    } else {
        printf("ponto (%d, %d) nao pertence ao retangulo formado.\n", a, b);
    }

    return 0;
}
