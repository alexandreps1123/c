/*
# - transforma o argumento em uma string entre aspas duplas
## - concatena duas palavras
*/
#include <stdio.h>

#define mkstr(s) # s
#define concat(a, b) a ## b

int main() {
    int ab = 20;
    //int b = 10;

    printf(mkstr(Olá mundo));
    printf("\n%d\n", concat(a, b));

    printf("%d\n", __STDC__);
    printf("%d\n", __LINE__);
    printf("%s\n", __FILE__);
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);

    return 0;
}