#include <stdio.h>

void sp_to_dash(const char *str);

int main() {
     sp_to_dash("TESTE do TESTE");

     return 0;
}

/*
*    variaveis do tipo const nao podem ser alteradas pelo programa
*    const pode ser utilizado para proteger objetos apontados pelos argumentos
*    de uma funcao para nao serem alterados por esta funcao
*/
void sp_to_dash(const char *str) {
     while(*str) {
          if (*str == ' ') printf("%c", '-');
          else printf("%c", *str);
          str++;
     }
}
