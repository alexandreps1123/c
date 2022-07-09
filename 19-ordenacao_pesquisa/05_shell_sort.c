// médio caso: n^1.2
#include <stdio.h>

#define VECTOR_SIZE 10

void swap(int *a, int *b);
void shell_sort(int *vector, int count);

int main() {
    int vector[VECTOR_SIZE] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};

    shell_sort(vector, VECTOR_SIZE);

    for(int i=0; i<VECTOR_SIZE; i++) {
        printf("%d\n",vector[i]);
    }

    return 0;
}

void shell_sort(int *vector, int count) {
    register int i, j, k, gap, x;
    
    for(k=1; k<count; k++) {
        gap = vector[k];
        for(i=gap; i<count; i++) {
            x = vector[i];
            for(j=i-gap; x<vector[j] && j>=0; j=j-gap) {
                vector[j+gap] = vector[j];
            }
            vector[j+gap] = x;
        }
    }
}