#include <stdio.h>

int is_in(char *s, char c);

int main() {
    char c = 'a';
    char s[80] = "alexandre";

    printf("%d\n", is_in(s, c));

    return 0;
}

int is_in(char *s, char c) {
    while(*s)
        if(*s==c) return 1;
        else *s++;

    return 0;
}