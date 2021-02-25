/*
le dois numeros e troca os conteudos desses numeros
depois imprime os novos valores na tela
*/
#include <stdio.h>

int main() {
    int a, b, aux;

    /*pega o valor que o usuario digita e armazena na variavel 'a'*/
    scanf("%d", &a);
    /*pega o valor que o usuario digita e armazena na variavel 'a'*/
    scanf("%d", &b);

    /*troca dos valores de 'a' e 'b'*/
    aux = a;
    a = b;
    b = aux;

    /*imprime os novos valores de 'a' e 'b'*/
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;    
}