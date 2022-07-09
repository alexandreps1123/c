#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *dic[][40] = {
    "atlas\n", "um livro de mapas",
    "carro\n", "um veículo motorizado",
    "telefone\n", "um dispositivo de comunicação",
    "aviao\n", "uma máquina voadora",
    "", ""
};

int main() {
    char word[80], ch;
    char **p;

    do {
        puts("\nEntre a palavra: ");
        fgets(word, 80, stdin);

        p = (char **)dic;

        do {
            if(!strcmp(*p, word)) {
                puts("significado:");
                puts(*(p+1));
                break;
            }
            if(!strcmp(*p, word)) break;
            p = p +2;
        }while(*p);

        if(!*p) puts("a palavra não está no dicionário");
        printf("outra? (y/n): ");

        ch = getchar();

    } while(toupper(ch) != 'N');

    return 0;
}