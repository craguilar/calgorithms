#include <stdlib.h>

void getknuth(int m, int n )
{
    for(int i = 0; i<n ; i++)
    {
        if((rand() % (n-i) )<m)
        {
            printf("%d\n",i);
            m--;
        }
    }
}

int randint(int lower, int upper)
{
    return (rand() % (upper - lower + 1)) + lower;
}

int comp (const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

void genshuf(int m, int n )
{
    int i,j;
    int arr[n];
    int *x = arr;
    for(i=0; i<n; i++)
        x[i]= i;
    for(i=0; i<m; i++)
    {
        j = randint(i,n-1);
        int t=x[i];
        x[i]= x[j];
        x[j]= t;
    }
    qsort (x, sizeof(x)/sizeof(*x), sizeof(*x), comp);
    for(i=0; i<m; i++)
        printf("%d\n",x[i]);
}
