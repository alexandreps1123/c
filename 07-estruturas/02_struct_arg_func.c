#include <stdio.h>

struct struct_type {
    int a, b;
    char ch;
};

void f1 (struct struct_type parm);

int main() {
    struct struct_type arg;

    arg.a = 1000;

    f1(arg);

    return 0;
}

void f1 (struct struct_type parm) {
    printf("%d\n", parm.a);
}