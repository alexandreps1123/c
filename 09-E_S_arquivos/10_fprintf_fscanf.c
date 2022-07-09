#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    char s[80];
    int t;

    if((fp=fopen("test.txt", "w"))==NULL) {
        printf("O arquivo nao pode ser aberto.\n");
        return 0;
    }

    printf("Digite uma string e um numero: ");
    fscanf(stdin, "%s%d", s, &t); /* le do teclado */

    fprintf(fp, "%s %d", s, t); /*le no arquivo*/
    fclose(fp);

    if((fp=fopen("test.txt", "w"))==NULL) {
        printf("O arquivo nao pode ser aberto.\n");
        return 0;
    }

    fscanf(fp, "%s%d", s, &t); /*le do arquivo*/
    fprintf(stdout, "%s %d", s, t); /*imprime na tela*/

    fclose(fp);

    return 0;
}