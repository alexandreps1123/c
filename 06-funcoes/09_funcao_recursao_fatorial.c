#include <stdio.h>

int factr(int n);
// /int i = 0;

int main(void) {
    int num = 5;
    
    printf("%d\n", factr(num));

    return 0;
}

int factr(int n) {
    //printf("%d\n", ++i);

    if(n==1) return 1;
    else return n * factr(n-1);
}