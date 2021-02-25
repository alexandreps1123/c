/*
instrucao compilar: gcc -ansi -Wall -o helloWorld helloWorld.c
          executar: ./helloWorld

gcc:    comando que invoca o compilador
-ansi:  parametro opcional, passado ao 'gcc' para que so aceite o padrao ANSI C
-Wall:  parametro opcional, habilita todas as 'warnings'
-o:     parametro opcional, usado para definir o nome do arquivo executavel que sera criado apos compilar
helloWorld.c:   parametro que deve ser passado ao gcc, o nome do arquivo com o codigo fonte    

*/
/*imprime 'Hello World' no terminal*/
#include <stdio.h>

int main(){
    printf("Hello World!\n");
    return 0;
}