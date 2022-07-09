/*DTOS: le arquivos e mostra o conteudo na tela*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char  *argv[]) {
    FILE *fp;
    char ch;

    if(argc!=2) {
        printf("Voce esqueceu de digitasr o nome do arquivo.\n");
        return 0;
    }

    if((fp=fopen(argv[1], "r"))==NULL) {
        printf("O arquivo nao pode ser aberto.\n");
        return 0;
    }

    ch = getc(fp);

    while(ch!=EOF) {
        putchar(ch);
        ch = getc(fp);
    }

    fclose(fp);

    return 0;
}