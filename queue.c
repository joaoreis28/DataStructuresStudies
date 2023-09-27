#include "queue.h"



Queue *create(int size)
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    q->front = 0;
    q->back = 0;
    q->size = size;
    q->array = (int*)malloc(size * sizeof(int));
    return q;
}

int empty (Queue *q)
{
    return (q->front == q->back);
}

int full(Queue *q)
{
    return (q->front == ((q->back + 1) % q->size));
}

void enqueue (Queue *q, int elem)
{
    if (full(q)) {
    printf ("error: queue overflow!\n");
    exit(1);
  }	  
    q->array[q->back] = elem;
    q->back = (q->back + 1) % q->size;

}

int dequeue (Queue *q)
{
    if(empty(q))
    {
         printf ("error: queue underflow!\n");
        exit(1);
    }
    int e = q->array[q->front];
    q->front = (q->front + 1) % q->size;
    return e;
}

int front (Queue *q)
{
    if (!empty(q)) 
        return q->array[q->front];	  
    else 
        return ERROR;
}

int getsize (Queue *q)
{
    return q->size;
}

void print (Queue *q)
{
    int i;
  printf("Queue: ");
  for (i = q->front; i != q->back; i = (i+1) % q->size) {
    printf ("%d ", q->array[i]);	  
  }
  printf("\n");
}


int search (Queue *q, int e)
{
    int t = q->front;
    for(t; t != q->back; t = (t+1) % q->size)
    {
        if(q->array[t] == e)
            return 1;
    }
    return 0;
}

void destroy (Queue *q)
{
  free (q->array);
  free (q);

}