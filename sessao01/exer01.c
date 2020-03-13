/*  Programa que le dois numeros e troca os conteudos 
    desses numeros e imprime os novos valores na tela   */

#include <stdio.h>

int main() {
    
    int a, b, c;

    //  Pegar o valor que o usuario digita e armazena na variavel 'a'
    scanf("%d", &a);

    //  Pegar o valor que o usuario digita e armazena na variavel 'a'
    scanf("%d", &b);

    //  Swap dos valores de 'a' e 'b'
    c = a;
    a = b;
    b = c;

    //  Imprime os novos valores de 'a' e 'b'
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;    
}