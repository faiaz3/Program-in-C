#include<stdio.h>

int main()
{
    int N=5;
    int array[N];

    for (int i=0; i<N; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i=0; i<N; i++)
    {
        printf("Value of i: %d\n",array[i]);
    }

    return 0;
}
