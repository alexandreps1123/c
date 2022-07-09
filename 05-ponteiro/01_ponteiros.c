#include<stdio.h>

int main() {

    int x;
    int *p1, *p2;

    //p1 recebe o endereço de memória de x
    p1 = &x;

    //p2 recebe o endereco armazenado em p1
    p2 = p1;

    //imprime o endereco armazenado em p2 == p1 == &x
    printf("%p", p2);

    return 0;
}
