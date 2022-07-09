// melhor caso (lista ordenada): 1/2(n^2 -n)
// médio caso: 3/4(n^2 -n)
// pior caso: 3/2(n^2 -n)
#include <stdio.h>

#define VECTOR_SIZE 10

void swap(int *a, int *b);
void bubble_sort(int *vector, int count);

int main() {
    int vector[VECTOR_SIZE] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};

    bubble_sort(vector, VECTOR_SIZE);

    for(int i=0; i<VECTOR_SIZE; i++) {
        printf("%d\n",vector[i]);
    }

    return 0;
}

void bubble_sort(int *vector, int count) {
    register int a, b;
    
    for(a=1; a<count; a++) {
        for(b=count-1; b>=a; b--) {
            if(vector[b-1] > vector[b]) {
                swap(&vector[b-1], &vector[b]);
            }
        }
    }
}

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}