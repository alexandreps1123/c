#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[80];
    FILE *fp;

    if((fp = fopen("TEST2.txt", "w+"))==NULL) {
        printf("O arquivo nao pode ser aberto.\n");
        return 0;
    }

    do {
        printf("Digite uma string (CR para sair): \n");
        fgets(str, 80, stdin);
        strcat(str, "\n");
        fputs(str, fp);
    }while(*str!='\n');

    rewind(fp); /*retornar o indicador de posição de arquivo para o inicio do arquivo*/

    while(!feof(fp)) {
        fgets(str, 79, fp);
        printf("%s", str);
    }

    fclose(fp);

    return 0;
}