#include <stdio.h>

// 'register' solicita ao compilador que a variavel seja armazenada em um registrador da CPU
// isso implica que a variavel nao tera endereço de memoria
int int_pwr(register int m, register int e);

int main() {

     printf("2^10 = %d", int_pwr(2, 10));

     return 0;
}

int int_pwr(register int m, register int e) {
     register int temp;

     temp = 1;

     for(; e; e--) temp = temp * m;

     return temp;
}
