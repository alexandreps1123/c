#include <stdio.h>

#define VECTOR_SIZE 10

int sequential_search(int *vector, int count, int key);

int main() {
    int vector[VECTOR_SIZE] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};

    int posicao = sequential_search(vector, VECTOR_SIZE, 9);

    if(posicao >= 0) {
        printf("O elemento foi encontrado na posicao: %d\n", posicao);
    }

    return 0;
}

int sequential_search(int *vector, int count, int key) {
    register int t;

    for(t=0; t<count; t++) {
        if(key==vector[t]) return t;
    }

    return -1; /* nao encontrou*/
}
