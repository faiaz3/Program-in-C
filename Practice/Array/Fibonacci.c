#include<stdio.h>

int main()
{
    int N;
    int i;
    printf("Enter N: ");
    scanf("%d", &N);
    int array[N];

    for (i=1; i<=N; i++)
    {
        array[0]=i;
        array[i+1]=array[i]+array[i-1];
    }

     for (i=1; i<=N; i++)
     {
        printf("%d ", array[i]);
     }

    return 0;
}
