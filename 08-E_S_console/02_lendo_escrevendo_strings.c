#include <stdio.h>
#include <string.h>

int main() {
    char str[80];

    fgets(str, 80, stdin);

    /*puts() imprime '\n' no final da string*/
    puts(str);

    return 0;
}