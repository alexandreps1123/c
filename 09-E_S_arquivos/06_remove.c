#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    char str[80];
    
    if(argc!=2) {
        printf("uso: xerase <nomearq>\n");
        return 0;
    }

    printf("apaga %s? (S/N)", argv[1]);
    fgets(str, 80, stdin);

    if(toupper(*str)=='S') {
        if(remove(argv[1])) {
            printf("O arquivo nao pode ser apagado.\n");
            return 0;
        }
    }

    return 0;
}