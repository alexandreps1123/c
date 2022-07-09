#include <stdio.h>
#include <string.h>

void check(char *a, char *b,
            int (*cmp) (const char *, const char *));

int main() {
    char s1[80], s2[80];
    int (*p)();

    p = strcmp;

    fgets(s1, 80, stdin);
    fgets(s2, 80, stdin);

    check(s1, s2, p);

    return 0;
}

void check(char *a, char *b,
            int (*cmp) (const char *, const char *)) {

    printf("testanto igualdade\n");
    if(!(*cmp) (a, b)) printf("igual\n");
    else printf("diferente\n");
}