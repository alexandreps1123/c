#include <stdio.h>

int main() {
    int count;

    /* count recebe a quantidade de caracteres existentes até a chamada do %n*/
    printf("isso%n é um teste\n", &count);
    printf("%d", count);

    return 0;
}