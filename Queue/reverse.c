#include "queue.h"



Queue* reverse(Queue *q)
{
    Queue* r = create(getsize(q));
    Queue *t = create(getsize(q));

    while(!empty(q))
    {
        while(!empty(r))
        {
            enqueue(t, dequeue(r));
        }
        enqueue(r, dequeue(q));
        while(!empty(t))
        {
            enqueue(r, dequeue(t));
        }
    }

    return r;
}



int main()
{
    Queue *q = create(4);
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    print(q);
    Queue *r = reverse(q);
    print(r);
    return 0;
}