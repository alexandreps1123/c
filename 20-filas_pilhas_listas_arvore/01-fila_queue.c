/*
    FIFO - First In First Out
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

int main()
{
    Queue minha_fila;
    Elemento meu_elemento;

    createQueue(&minha_fila);

    meu_elemento.numero = 1;
    enqueue(&minha_fila, &meu_elemento);

    meu_elemento.numero = 2;
    enqueue(&minha_fila, &meu_elemento);

    meu_elemento.numero = 3;
    enqueue(&minha_fila, &meu_elemento);

    meu_elemento.numero = 4;
    enqueue(&minha_fila, &meu_elemento);

    printf("Tamanho da fila: %d\n", length(&minha_fila));

    while (length(&minha_fila) > 0)
    {
        meu_elemento = *(printHead(&minha_fila));
        printf("Numero: %d\n", meu_elemento.numero);
        dequeue(&minha_fila);
    }

    empty(&minha_fila);

    printf("Tamanho da fila: %d\n", length(&minha_fila));

    return 0;
}