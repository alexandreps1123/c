/* copia um arquivo */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *in, *out;
    char ch;

    if(argc!=3) {
        printf("Voce esqueceu de informar o nome do arquivo.\n");
        return 0;
    }

    if((in=fopen(argv[1], "rb"))==NULL) {
        printf("O arquivo-fonte nao pode ser aberto.\n");
        return 0;
    }

    if((out=fopen(argv[2], "wb"))==NULL) {
        printf("O arquivo-destino nao pode ser aberto.\n");
        return 0;
    }

    while(!feof(in)) {
        ch = getc(in);
        if(!feof(in)) putc(ch, out);
    }

    return 0;
}