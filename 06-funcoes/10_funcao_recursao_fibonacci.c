#include <stdio.h>

int fibo(int num);
//int i = 0;

int main() {
    printf("%d\n", fibo(10));

    return 0;
}

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
int fibo(int num) {
    //printf("%d\n", ++i);

    if (num == 0) return 0;
    else if(num == 1) return 1;
    else return fibo(num-1)+fibo(num-2);
}