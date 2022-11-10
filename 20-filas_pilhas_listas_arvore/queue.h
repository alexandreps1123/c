#ifndef __QUEUE__
#define __QUEUE__

/**
 *  enum boolean
 *  FALSE = 0, TRUE = 1
 */
typedef enum { FALSE, TRUE } Boolean;

/**
 *  struct elemento da fila
 */
typedef struct Elemento
{
    int numero;
    struct Elemento *proximo;
} Elemento;

/**
 *  struct queue
 *  guarda as referências para o início e o fim da fila.
 */
typedef struct Queue
{
    Elemento *head;
    Elemento *tail;
} Queue;

/*
 *  Cria uma queue vazia.
 *  SEMPRE deve ser chamada antes de começar a operar com uma queue.
 */
void createQueue(Queue *q);

/*
 *  Verifica se a fila esta vazia.
 *  Se o primeiro elemento é nulo.
 */
Boolean isEmpty(Queue *q);

/*
 *  Operação de armazenar um elemento na queue
 */
void enqueue(Queue *q, Elemento *elem);

/*
 *  Operação de remover o primeiro elemento da queue
 */
void dequeue(Queue *q);

/*
 *  Operação de esvaziar a queue
 *  Remover todos os elementos presentes na queue
 */
void empty(Queue *q);

/*
 *  Operação de fornecer o primeiro elemento da queue
 *  Retorna a struct referente  ao primeiro elemento da queue
 */
Elemento *printHead(Queue *q);

/*
 *  Retorna o tamanho da queue.
 *  A quantidade de elementos contidos na queue.
 */
int length(Queue *q);

#endif /* __QUEUE__ */
