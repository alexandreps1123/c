/*
le 3 notas e seus respectivos pesos
e calcula a media ponderada
*/

#include <stdio.h>

int main() {
    int peso1, peso2, peso3;
    float nota1, nota2, nota3, mediaP;

    printf("Informe as 3 notas do aluno:\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);

    printf("Informe os pesos das primeira, segunda e terceira nota, respectivamente:\n");
    scanf("%d", &peso1);
    scanf("%d", &peso2);
    scanf("%d", &peso3);

    mediaP = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3);

    printf("A media ponderada do aluno eh: %.2f\n", mediaP);

    return 0;
}