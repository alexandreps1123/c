/*
emite alertas de acordo com o indice informado
*/

#include <stdio.h>

int main(){

    float indice;

    printf("Informe o indice:");
    scanf("%f",&indice);

    if(indice < 0.05 ){
        printf("Abaixo do normal\n");
    }
    else if(indice > 0.05 && indice < 0.25){
        printf("Normal\n");
    }
    else if(indice >= 0.25 && indice < 0.30){
        printf("Alerta\n");
    }
    else if(indice >= 0.30 && indice < 0.40){
        printf("Industrias da lista A: suspensas\n");
    }
    else if (indice >= 0.40 && indice < 0.50){
        printf("Industrias da lista A: suspensas\nIndustrias da lista B: suspensas\n");
    }
    else{
        printf("Industrias da lista A: suspensas\nIndustrias da lista B: suspensas\nIndustrias da lista C: suspensas\n");
    }

    return 0;
}