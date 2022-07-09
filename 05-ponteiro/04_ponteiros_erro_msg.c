#include <stdio.h>

void syntax_error(int num);

int main() {

     syntax_error(1);
     syntax_error(2);
     syntax_error(3);

     return 0;
}

void syntax_error(int num) {
     static char *err[] = {
          "Arquivo não pode ser aberto!\n",
          "Erro de leitura\n",
          "Erro de escrita\n",
          "Falha da mídia\n"
     };

     printf("%s", err[num]);
}
