#include "queue.h"
#include <stdlib.h>


int main()
{
    Queue *q = create(4);
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    print(q);
    dequeue(q);
    print(q);
    enqueue(q, 4);
    print(q);


    return 0;
}