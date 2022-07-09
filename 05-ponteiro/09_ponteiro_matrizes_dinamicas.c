#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *s;
    register int t;

    s = malloc(80);

    if(!s) {
        printf("Falha na solicitação de memória\n.");
        exit(1);
    }

    fgets(s, 80, stdin);
    for(t=strlen(s)-1; t>=0; t--) putchar(s[t]);
    free(s);

    return 0;
}