// ordenação oscilante
// a leitura da matriz é invertida em passos subsequentes
#include <stdio.h>

#define VECTOR_SIZE 10

void swap(int *a, int *b);
void shaker(int *vector, int count);

int main() {
    int vector[VECTOR_SIZE] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};

    shaker(vector, VECTOR_SIZE);

    for(int i=0; i<VECTOR_SIZE; i++) {
        printf("%d\n",vector[i]);
    }

    return 0;
}

void shaker(int *item, int count) {
    register int a, b;
    int exchange;
    
    do {
        exchange = 0;
        for(a=count-1; a>0; a--) {
            if(item[a-1]>item[a]) {
                swap(&item[a], &item[a-1]);
                exchange=1;
            }
        }

        for(a=1; a<count; a++) {
            if(item[a-1]>item[a]) {
                swap(&item[a], &item[a-1]);
                exchange=1;
            }
        }
    }while(exchange);
}

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}