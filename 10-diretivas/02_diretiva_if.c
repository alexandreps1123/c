#include <stdio.h>

#define MAX 99
/*#define MAX 100*/

int main() {
    #if MAX>99
        printf("dentro o #if\n");
        return 0;
    #endif

    printf("fora do #if\n");

    return 0;
}