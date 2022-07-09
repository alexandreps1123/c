/*kdot: escreve do teclado para o disco*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;

    if (argc!=2) {
        printf("Voce esqueceu de digitar o nome do arquivo.\n");
        return 0;
    }

    if ((fp=fopen(argv[1], "w"))==NULL) {
        printf("O arquivo nao pode ser aberto.\n");
        return 0;
    }

    do {
        ch = getchar();
        putc(ch, fp);
    } while(ch!='$');

    fclose(fp);

    return 0;
}