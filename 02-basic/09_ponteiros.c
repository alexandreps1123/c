#include <stdio.h>

int main() {
     int target, source;
     int *m;
     float f;

     source = 10;
     /* m recebe o endereco de source*/
     m = &source;
     /*target recebe o conteudo de m */
     target = *m;

     printf("%d\n", target);
     printf("%p\n", m);

     // lu long unsigned
     printf("%lu\n", sizeof f);
     printf("%lu\n", sizeof(int));

     return 0;
}
