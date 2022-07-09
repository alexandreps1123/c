/*freopen eh util, por exemplom, em depuracao*/
#include <stdio.h>

int main() {
    char str[80];

    freopen("OUTPUT", "w", stdout);

    printf("Digite uma string: ");
    fgets(str, 80, stdin);
    printf(str);

    return 0;
}