#include<stdio.h>

int main()
{
    int N,i;
    printf("Enter Array Size:");
    scanf("%d",&N);

    int array[N];

    for(i=1; i<=N; i++)
    {
        printf("Number %d :", i);
        scanf("%d",&array[i]);
    }

    for(i=N; i>=1; i--)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
