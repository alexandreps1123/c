#include <stdio.h>

int main() {
    int x, *p, **q;

    x = 10;
    p = &x;
    q = &p;

    printf("p: %p\n", p);
    printf("q: %p\n", q);
    printf("%d\n", **q);

    return 0;
}