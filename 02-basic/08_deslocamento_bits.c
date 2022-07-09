#include <stdio.h>

int main()
{
     unsigned int i;
     int j;

     i =1;

     /* deslocamento a esquerda */
     for (j=0; j<4; j++) {
          i = i << 1;
          printf("Deslocamento a esquerda %d: %d\n", j, i);
     }

     /* deslocamento a direita*/
     for (j=0; j<4; j++) {
          i = i >> 1;
          printf("Deslocamento a direita %d: %d\n", j, i);
     }

     return 0;
}
