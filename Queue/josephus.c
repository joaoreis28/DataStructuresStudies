#include "queue.h"

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    Queue* j = create(n + 1);
    Queue* aux = create(n + 1);
    Queue* death = create(n + 1);

    for(int i = 1; i < n + 1; i++)
        enqueue(j, i);

    int count = 1;
    while(!empty(j))
    {
        if( count % m == 0)
        {
            enqueue(death, dequeue(j));
            count = 1;
            continue;
        }
        enqueue(aux, dequeue(j));
        enqueue(j, dequeue(aux));
        count++;
    }

    print(death);
    return 0;
}