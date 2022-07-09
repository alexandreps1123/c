#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;

    if(argc!=3) {
        printf("Uso: SEEK nomearq byte\n");
        return 0;
    }

    if((fp=fopen(argv[1], "r"))==NULL) {
        printf("O arquivo não pode ser aberto.\n");
        return 0;
    }

    if(fseek(fp, atol(argv[2]), SEEK_SET)) {
        printf("Erro na busca.\n");
        return 0;
    }

    printf("O byte em %ld eh %c.\n", atol(argv[2]), getc(fp));
    fclose(fp);

    return 0;
}