#include <stdio.h>

int main() {
    int i;
    char str[80], str2[80];

    scanf("%d%[abcdefg]%s", &i, str, str2);
    printf("%d %s %s", i, str, str2);

    return 0;
}