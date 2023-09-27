#include "queue.h"
#include <stdlib.h>


int main()
{
    Queue *odd = create(10);
    Queue *even = create(10);

    int n, i = 0;
    while(i < 10)
    {
        n = rand() % 10;
        if(n & 1)
            enqueue(odd, n);
        else
            enqueue(even, n);
        i++;
    }
    print(odd);
    print(even); 
    return 0;    
}