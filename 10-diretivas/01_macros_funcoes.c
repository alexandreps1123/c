#include <stdio.h>

#define ABS(a) (a)<0 ? -(a) : (a)

int main() {
    printf("abs de 1 e -1: %d %d\n", ABS(1), ABS(-1));

    return 0;
}