#include <stdio.h>

#define MAX 99
/*#define MAX 100*/

int main() {
    #if MAX>99
        printf("dentro o #if\n");
        return 0;
    #elif MAX==99
        printf("dentro do #elif\n");
    #else
        printf("dentro do #else\n");
    #endif
    
    return 0;
}
