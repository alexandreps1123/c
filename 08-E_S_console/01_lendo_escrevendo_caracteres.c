#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;

    printf("Entre com algum texto (digite um ponto para sair).\n");

    do {
        ch = getchar();

        if(islower(ch)) ch = toupper(ch);
        else ch = tolower(ch);

        putchar(ch);  

    }while (ch!='.');

    return 0;
}