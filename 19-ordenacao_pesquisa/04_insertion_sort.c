// melhor caso (lista ordenada): 2(n -n)
// médio caso: 1/4(n^2 -n)
// pior caso: 1/2(n^2 +n)
#include <stdio.h>

#define VECTOR_SIZE 10

void swap(int *a, int *b);
void insertion_sort(int *vector, int count);

int main() {
    int vector[VECTOR_SIZE] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};

    insertion_sort(vector, VECTOR_SIZE);

    for(int i=0; i<VECTOR_SIZE; i++) {
        printf("%d\n",vector[i]);
    }

    return 0;
}

void insertion_sort(int *vector, int count) {
    register int a, b, item;
    
    for(a=1; a<count; a++) {
        item = vector[a];
        for(b=a-1; b>=0 && item<vector[b]; b--) {
            vector[b+1] = vector[b];
        }
        vector[b+1] =  item;
    }
}