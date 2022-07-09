#include <stdio.h>

int main() {
    char *p;

    printf("entre com um endereco: ");
    scanf("%p", &p);
    printf("na posicao %p ha %c\n", p, *p);

    return 0;
}