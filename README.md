# C

A ideia deste reposítorio é o de revisar alguns conceitos que já aprendi e implementar algumas coisas que eu achar interessante em C.
Foi em linguagem C minhas primeiras linhas de código, então retornar as origens será um grande avanço.

## Compilação em C

>Exemplo:
Instrução compilar: gcc -ansi -Wall -o helloWorld helloWorld.c
* executar: ./helloWorld

* gcc:    comando que invoca o compilador
* -ansi:  parâmetro opcional, passado ao 'gcc' para que só aceite o padrão ANSI C
* -Wall:  parâmetro opcional, habilita todas as 'warnings'
* -o:     parâmetro opcional, usado para definir o nome do arquivo executável que sera criado após compilar
* helloWorld.c:   parâmetro que deve ser passado ao gcc, o nome do arquivo com o código fonte

>Código fonte que utiliza a biblioteca: math.h
* gcc -o <nome_arquivo> <nome_arquivo.c> -lm

* -lm:    parâmetro necessário para executar a biblioteca math.h
