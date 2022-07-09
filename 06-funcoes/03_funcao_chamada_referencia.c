#include <stdio.h>

// chamada por refencia cria altera a propria variavel
void sqr(int *x);

int main() {
    int x = 10;
    
    printf("%d\n", x);
    sqr(&x);
    printf("%d\n", x);

    return 0;
}

void sqr(int *x) {
    *x = (*x)*(*x);
}