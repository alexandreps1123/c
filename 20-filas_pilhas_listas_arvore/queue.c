#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: renomear metodo
static void algumaCoisa(Elemento *p, Elemento *elemento);

void createQueue(Queue *q)
{
    q->head = NULL;
    q->tail = NULL;
}

Boolean isEmpty(Queue *q)
{
    if (q->head == NULL) return TRUE;

    return FALSE;
}

void enqueue(Queue *q, Elemento *elemento)
{
    Elemento *p;

    p = malloc(sizeof(Elemento));
    if (p == NULL)
    {
        printf("Nao foi possivel alocar memoria");
        return;
    }

    // TODO: renomear metodo
    algumaCoisa(p, elemento);

    if (isEmpty(q))
    {
        q->head = p;
    }
    else
    {
        q->tail->proximo = p;
    }

    q->tail = p;
}

void dequeue(Queue *q)
{
    Elemento *p;

    if (isEmpty(q))
    {
        printf("A Fila esta vazia.\n");
        return;
    }

    p = q->head;

    q->head = p->proximo;

    if (q->head == NULL) q->tail = NULL;

    free(p);

    return;
}

void empty(Queue *q)
{
    Elemento *proximo_elemento, *excluir;

    if (isEmpty(q))
    {
        printf("A Fila esta vazia.\n");
        return;
    }

    proximo_elemento = q->head;
    while (proximo_elemento != NULL)
    {
        excluir = proximo_elemento;
        proximo_elemento = proximo_elemento->proximo;
        free(excluir);
    }

    createQueue(q);

    return;
}

Elemento *printHead(Queue *q)
{
    Elemento *p;

    if (isEmpty(q))
    {
        printf("A Fila esta vazia.");
        p = NULL;
        return p;
    }

    p = q->head;

    return p;
}

int length(Queue *q)
{
    Elemento *p;
    int count = 0;

    if (!isEmpty(q))
    {
        p = q->head;
        while (p != NULL)
        {
            p = p->proximo;
            count++;
        }
    }

    return count;
}

// TODO: renomear metodo
void algumaCoisa(Elemento *p, Elemento *elemento)
{
    p->numero = elemento->numero;
    p->proximo = NULL;
}