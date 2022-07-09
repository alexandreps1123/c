#include <stdio.h>

// devolve um ponteiro para a primeira ococrrencia de c em s
char *match(char c, char *s);

int main(void) {
    char s[80], ch, *p;
    
    fgets(s, 80, stdin);
    ch = getchar();
    p = match(ch, s);

    if(*p)
        printf("%s", p);
    else
        printf("Nao encontrou.\n");

    return 0;
}

char *match(char c, char *s) {
    while(c!=*s && *s) s++;
    return (s);
}