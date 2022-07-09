// O algoritmo de busca binaria apenas funciona em uma lista ordenada
// melhor caso (lista ordenada): 1/2(n^2 -n)
// médio caso: 3/4(n^2 -n)
// pior caso: 3/2(n^2 -n)
#include <stdio.h>

#define VECTOR_SIZE 10

void swap(int *a, int *b);
void bubble_sort(int *vector, int count);
int binary_search(int *vector, int count, int key);

int main() {
    int vector[VECTOR_SIZE] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    int posicao = 0;

    bubble_sort(vector, VECTOR_SIZE);

    posicao = binary_search(vector, VECTOR_SIZE, 7);
    
    if(posicao >= 0) {
        printf("O elemento foi encontrado na posicao: %d\n", posicao);
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

int binary_search(int *vector, int count, int key) {
    int low, high, mid;

    low = 0; high = count-1;

    while(low<=high) {
        mid = (low+high)/2;
        if(key<vector[mid]) high = mid-1;
        else if (key>vector[mid]) low  = mid+1;
        else return mid; /*encontrou*/
    }

    return -1; /*nao encontrado*/    
}