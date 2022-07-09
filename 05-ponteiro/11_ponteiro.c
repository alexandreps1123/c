#include <stdio.h>
#include <string.h>

int main() {
    char *p1;
    char s[80];

    do {
        p1 = s;
        fgets(s, 80, stdin);
        while(*p1) printf(" %d", *p1++);
    }while(strcmp(s, "done\n")); //comparar com o buffer inteiro do stdin inclusive o \n

    return 0;
}