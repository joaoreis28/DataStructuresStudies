#ifndef _queue_h_
#define _queue_h_
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


#define ERROR -INT_MAX


typedef struct
{
    int front;
    int back;
    int size;
    int* array;
}Queue;

Queue *create(int size);
void enqueue (Queue *q, int elem);
int empty (Queue *q);
int full(Queue *q);
int dequeue (Queue *q);
int front (Queue *q);
int getsize (Queue *q);
void print (Queue *q);
int search (Queue *q, int e);
void destroy (Queue *q);


#endif
