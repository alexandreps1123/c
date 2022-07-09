// desempenho medio: nlog(n)
// numero medio de trocas: n/6(log n)
/* 
    o quick_sort eh menos eficiente em ordenar listas com menos de 100 dados
    nessa situação até mesmo o bubble_sort pode ser uma melhor escolha
    de algoritmo de ordenação, devido a recursão utilizado pelo quick_sort.
*/
#include <stdio.h>

#define VECTOR_SIZE 10

void swap(int *a, int *b);
void quick_sort(int *vector, int count);
void qs(int *vector, int left, int right);

int main() {
    int vector[VECTOR_SIZE] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};

    quick_sort(vector, VECTOR_SIZE);

    for(int i=0; i<VECTOR_SIZE; i++) {
        printf("%d\n",vector[i]);
    }

    return 0;
}

void quick_sort(int *vector, int count) {
    qs(vector, 0, count-1);
}

void qs(int *vector, int left, int right) {
    register int i, j;
    int x, y;

    i = left; j = right;
    x = vector[(left+right)/2];

    do {
        while(vector[i]<x && i<right) i++;
        while(x<vector[j] && j>left) j--;

        if(i<=j) {
            swap(&vector[i], &vector[j]);
            i++; j--;
        }

    } while(i<=j);

    if(left<j)  qs(vector, left, j);
    if(i<right)  qs(vector, i, right);

}

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}