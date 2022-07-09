/*
    FIFO - First In First Out
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct elemento da fila
typedef struct elemento
{
    int numero;
    struct elemento *proximo; // proximo elemento
} elemento;

// struct fila
typedef struct fila
{
    elemento *inicio;
    elemento *fim;
} fila;

void criar_fila(fila *q);
int esta_vazia(fila *q);
void inserir_elemento(fila *q, elemento *elem);
void remover_elemento(fila *q);

int tamanho(fila *q);
struct elemento *primeiro_elemento(fila *q);
void esvaziar(fila *q);

int main()
{

    fila minha_fila;
    elemento meu_elemento;

    criar_fila(&minha_fila);

    meu_elemento.numero = 1;

    inserir_elemento(&minha_fila, &meu_elemento);
    meu_elemento.numero = 2;
    inserir_elemento(&minha_fila, &meu_elemento);
    meu_elemento.numero = 3;
    inserir_elemento(&minha_fila, &meu_elemento);
    meu_elemento.numero = 4;
    inserir_elemento(&minha_fila, &meu_elemento);

    meu_elemento = *(primeiro_elemento(&minha_fila));

    remover_elemento(&minha_fila);

    printf("Tamanho da fila: %d\n", tamanho(&minha_fila));

    esvaziar(&minha_fila);

    printf("Tamanho da fila: %d\n", tamanho(&minha_fila));

    return 0;
}

/*
 *   Cria uma fila vazia.
 *   SEMPRE deve ser chamada antes de começar a operar com uma fila.
 */
void criar_fila(fila *q)
{
    q->inicio = NULL;
    q->fim = NULL;
}

/*
 *   Verifica se a lista esta vazia.
 *   Se o primeiro elemento é nulo.
 */
int esta_vazia(fila *q)
{
    if (q->inicio == NULL)
        return 1; // Verdadeiro: primeiro elemento nulo

    return 0; // Falso
}

/*
 *   Operação de armazenar um elemento na fila
 */
void inserir_elemento(fila *q, elemento *elem)
{
    elemento *p;

    p = malloc(sizeof(elemento));
    if (p == NULL)
    {
        printf("Nao foi possivel alocar memoria");
        return;
    }

    p->numero = elem->numero;
    p->proximo = NULL;

    if (esta_vazia(q))
    {
        q->inicio = p;
    }
    else
    {
        q->fim->proximo = p;
    }

    q->fim = p;
}

/*
 *   Operação de remover o primeiro elemento da fila
 */
void remover_elemento(fila *q)
{
    elemento *p;

    if (esta_vazia(q))
    {
        printf("A Lista esta vazia.");
        return;
    }

    p = q->inicio;

    q->inicio = p->proximo;

    if (q->inicio == NULL)
    {
        q->fim = NULL;
    }

    free(p);

    return;
}

/*
 *   Operação de esvaziar a fila
 *   Remover todos os elementos presentes na fila
 */
void esvaziar(fila *q)
{
    elemento *proximo_elemento, *excluir;

    if (esta_vazia(q))
    {
        printf("A Lista esta vazia.");
        return;
    }

    proximo_elemento = q->inicio;
    while (proximo_elemento != NULL)
    {
        excluir = proximo_elemento;
        proximo_elemento = proximo_elemento->proximo;
        free(excluir);
    }

    criar_fila(q);

    return;
}

/*
 *   Operação de fornecer o primeiro elemento da fila
 *   Retorna a struct referente  ao primeiro elemento da fila
 */

struct elemento *primeiro_elemento(fila *q)
{
    elemento *p;

    if (esta_vazia(q))
    {
        printf("A Lista esta vazia.");
        p = NULL;
        return p;
    }

    p = q->inicio;

    return p;
}

/*
 *   Retorna o tamanho da fila.
 *   A quantidade de elementos contidos na fila.
 */
int tamanho(fila *q)
{
    elemento *p;
    int count = 0;

    if (!esta_vazia(q))
    {
        p = q->inicio;
        while (p != NULL)
        {
            p = p->proximo;
            count++;
        }
    }

    return count;
}