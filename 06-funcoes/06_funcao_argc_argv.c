#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if(argc!=2) {
        printf("Voce esqueceu de digitar seu nome.\n");
        exit(1);
    }

    printf("Ola %s.\n", argv[1]);

    return 0;
}