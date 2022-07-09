// médio caso: n(log n+y), em que y eh a constante de euler =  0,577216
#include <stdio.h>

#define VECTOR_SIZE 10

void selection_sort(int *vector, int count);

int main() {
    int vector[VECTOR_SIZE] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};

    selection_sort(vector, VECTOR_SIZE);

    for(int i=0; i<VECTOR_SIZE; i++) {
        printf("%d\n",vector[i]);
    }

    return 0;
}

void selection_sort(int *vector, int count) {
    register int a, b, c, item;
    int exchange;
    
    for(a=0; a<count-1; a++) {
        exchange = 0;
        c = a;
        item = vector[a];
        for(b=a+1; b<count; b++) {
            if(vector[b] < item) {
                c = b;
                item = vector[b];
                exchange = 1;
            }
        }
        if (exchange) {
            vector[c] = vector[a];
            vector[a] = item;
        }
    }
}