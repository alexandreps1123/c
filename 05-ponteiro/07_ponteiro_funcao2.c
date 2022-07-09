#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void check(char *a, char *b,
            int (*cmp) (const char *, const char *));
int numcmp(const char *a, const char *b);

int main() {
    char s1[80], s2[80];

    fgets(s1, 80, stdin);
    fgets(s2, 80, stdin);

    if(isalpha(*s1))
        check(s1, s2, strcmp);
    else
        check(s1, s2, numcmp);

    return 0;
}

void check(char *a, char *b,
            int (*cmp) (const char *, const char *)) {

    printf("testanto igualdade\n");
    if(!(*cmp) (a, b)) printf("igual\n");
    else printf("diferente\n");
}

int numcmp(const char *a, const char *b) {
    printf("estou aqui\n");
    if(atoi(a)==atoi(b)) return 0;
    return 1;
}