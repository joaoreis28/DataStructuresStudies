#include "queue.h"

int pfault(int requests[], int nreq, int nslots)
{
    Queue *q = create(nslots + 1);
    int ans = 0;
    for(int i = 0; i < nreq; i++)
    {
        if(!full(q))
        {
            enqueue(q, requests[i]);
            ans++;
        }
        else
        {
            if(!search(q, requests[i]))
            {
                dequeue(q);
                enqueue(q, requests[i]);
                ans++;
            }
        }
    }

    return ans;
}



int main()
{
    int arr[6] = {1, 3, 0, 3, 5, 6};
    printf("%d\n", pfault(arr, 6, 3));
    return 0;
}