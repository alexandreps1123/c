//teste
#include <stdio.h>

void f(void);
int is_in(char *s, char c);

int main(void) {
     int i;
     char nome[80] = "alexandre";

     for(i=0; i <10; i++) f();

     if(is_in(nome,'b')) {
          printf("%s", nome);
     } else {
          printf("não rolou!");
     }

     return 0;
}

void f(void) {
     int j = 10;

     printf("%d\n", j);

     j++;
}

//verifica se uma string contem determinado caractere
int is_in(char *s, char c) {
     while(*s)
          if(*s == c) return 1;
          else s++;

     return 0;
}
