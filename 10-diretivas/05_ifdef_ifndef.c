#include <stdio.h>

#define TED 10

int main(void) {
    #undef TED
    #ifdef TED
        printf("Oi Ted\n");
    #else
        printf("Oi qualquer um\n");
    #endif

    #ifndef RALPH
        printf("RALPH nao esta definido\n");
    #endif

    return 0;
}