# C

A ideia deste reposítorio é o de revisar alguns conceitos que já aprendi e implementar algumas coisas que eu achar interessante em C.
Foi em linguagem C minhas primeiras linhas de código, então retornar as origens será um grande avanço.

## Compilação em C

>Exemplo:
* Instrucao compilar: gcc -ansi -Wall -o helloWorld helloWorld.c
* executar: ./helloWorld

* gcc:    comando que invoca o compilador
* -ansi:  parametro opcional, passado ao 'gcc' para que so aceite o padrao ANSI C
* -Wall:  parametro opcional, habilita todas as 'warnings'
* -o:     parametro opcional, usado para definir o nome do arquivo executavel que sera criado apos compilar
* helloWorld.c:   parametro que deve ser passado ao gcc, o nome do arquivo com o codigo fonte

>Código fonte que utiliza a biblioteca: math.h
* gcc -o <nome_arquivo> <nome_arquivo.c> -lm

* -lm:    parametro necessario para executar a biblioteca math.h
