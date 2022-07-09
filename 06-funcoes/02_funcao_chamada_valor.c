#include <stdio.h>

// chamada por valor cria uma copia do parâmetro
int sqr(int x);

int main() {
    int x = 10;
    
    printf("%d %d\n", x, sqr(x));

    return 0;
}

int sqr(int x) {
    x = x*x;
    return x;
}