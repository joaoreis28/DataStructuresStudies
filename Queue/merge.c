#include "queue.h"


Queue* merge(Queue* a, Queue* b)
{
    Queue* c = create(getsize(a) + getsize(b));

    while(!empty(a) && !empty(b))
    {
        if(front(a) > front(b))
            enqueue(c, dequeue(b));
        else
            enqueue(c, dequeue(a));
    }

    while(!empty(a))
        enqueue(c, dequeue(a));

    while(!empty(b))
        enqueue(c, dequeue(b));

    return c;
}





int main()
{
    Queue *a = create(4);
    enqueue(a, 1);
    enqueue(a, 3);
    enqueue(a, 5);
    print(a);

    Queue *b = create(6);
    enqueue(b, 2);
    enqueue(b, 4);
    enqueue(b, 5);
    enqueue(b, 6);
    enqueue(b, 8);
    print(b);

    Queue *ans = merge(a,b);
    print(ans);

    destroy(ans);
    destroy(a);
    destroy(b);

    return 0;
}