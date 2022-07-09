#include <stdio.h>

#define SIZE 10

int main() {

     int *p1, conteudo, vetor[SIZE];

     //preencher o vetor com elementos antes de inicializar
     for(int i = 0; i < SIZE; i++) {
          vetor[i] = i;
     }

     for(int i = 0; i < SIZE; i++) {
          p1 = &vetor[i];
          p1++;
          printf("%d - Endereco de p1: %p\n", i, p1);

          conteudo = *p1;
          printf("%d - Conteudo do endereco de p1: %d\n", i, conteudo);
          printf("\n");
     }

     return 0;
}
