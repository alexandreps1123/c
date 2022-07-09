#include <stdio.h>

#define TED 10

int main(void) {
    #if defined RALPH
        printf("Oi Ted\n");
    #elif !defined TED
        printf("Oi qualquer um\n");
    #endif

    #ifndef RALPH
        printf("RALPH nao esta definido\n");
        printf("%d", __LINE__);
    #endif

    return 0;
}