#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p;

    // aloca 10 espacos de memoria do tipo int
    p = malloc(10*sizeof(int));

    // sempre verificar se memoria foi alocada
    if(!p) {
        printf("sem memória!!!\n");
        exit(1);
    }
    else { 
        printf("memória alocada com sucesso!\n");
        free(p);
    }

    return 0;
}