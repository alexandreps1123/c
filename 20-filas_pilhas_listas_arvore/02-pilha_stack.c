/*
    LIFO - Last In First Out
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct elemento da pilha
typedef struct elemento
{
    int numero;
    struct elemento *proximo; // proximo elemento
} elemento;

// struct pilha
typedef struct pilha
{
    elemento *topo;
} pilha;

void criar_pilha(pilha *s);
int esta_vazia(pilha *s);
void push_elemento(pilha *s, elemento *elem);
void pop_elemento(pilha *s);

int tamanho(pilha *s);
struct elemento *primeiro_elemento(pilha *s);
void esvaziar(pilha *s);

int main()
{

    pilha minha_pilha;
    elemento meu_elemento;

    criar_pilha(&minha_pilha);

    meu_elemento.numero = 1;
    push_elemento(&minha_pilha, &meu_elemento);

    meu_elemento.numero = 2;
    push_elemento(&minha_pilha, &meu_elemento);

    meu_elemento.numero = 3;
    push_elemento(&minha_pilha, &meu_elemento);

    meu_elemento.numero = 4;
    push_elemento(&minha_pilha, &meu_elemento);

    meu_elemento = *(primeiro_elemento(&minha_pilha));

    pop_elemento(&minha_pilha);

    printf("Tamanho da pilha: %d\n", tamanho(&minha_pilha));

    esvaziar(&minha_pilha);

    printf("Tamanho da pilha: %d\n", tamanho(&minha_pilha));

    return 0;
}

/*
 *   Cria uma pilha vazia.
 *   SEMPRE deve ser chamada antes de começar a operar com uma pilha.
 */
void criar_pilha(pilha *s)
{
    s->topo = NULL;
}

/*
 *   Verifica se a pilha esta vazia.
 *   Se o primeiro elemento é nulo.
 */
int esta_vazia(pilha *s)
{
    return s->topo == NULL; // Verdadeiro: elemento do topo eh nulo
}

/*
 *   Operação de armazenar um elemento na pilha
 */
void push_elemento(pilha *s, elemento *elem)
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

    if (esta_vazia(s))
    {
        s->topo = p;
        return;
    }

    p->proximo = s->topo;
    s->topo = p;

    return;
}

/*
 *   Operação de remover o primeiro elemento da pilha
 */
void pop_elemento(pilha *s)
{
    elemento *p;

    if (esta_vazia(s))
    {
        printf("A pilha esta vazia.\n");
        return;
    }

    p = s->topo;

    s->topo = p->proximo;

    free(p);

    return;
}

/*
 *   Operação de esvaziar a pilha
 *   Remover todos os elementos presentes na pilha
 */
void esvaziar(pilha *s)
{
    elemento *proximo_elemento, *excluir;

    if (esta_vazia(s))
    {
        printf("A Lista esta vazia.");
        return;
    }

    proximo_elemento = s->topo;
    while (proximo_elemento != NULL)
    {
        excluir = proximo_elemento;
        proximo_elemento = proximo_elemento->proximo;
        free(excluir);
    }

    criar_pilha(s);

    return;
}

/*
 *   Operação de fornecer o primeiro elemento da pilha
 *   Retorna a struct referente  ao primeiro elemento da pilha
 */

struct elemento *primeiro_elemento(pilha *q)
{
    elemento *p;

    if (esta_vazia(q))
    {
        printf("A Lista esta vazia.");
        p = NULL;
        return p;
    }

    p = q->topo;

    return p;
}

/*
 *   Retorna o tamanho da pilha.
 *   A quantidade de elementos contidos na pilha.
 */
int tamanho(pilha *s)
{
    elemento *p;
    int count = 0;

    if (!esta_vazia(s))
    {
        p = s->topo;
        while (p != NULL)
        {
            p = p->proximo;
            count++;
        }
    }

    return count;
}