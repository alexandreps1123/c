#include <stdio.h>

// chamada por referencia
void swap(int *x, int *y);

int main() {
    int x, y;
    
    x = 10;
    y = 100;

    printf("x: %d y: %d\n", x, y);
    swap(&x, &y);
    printf("x: %d y: %d\n", x, y);

    return 0;
}


void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}