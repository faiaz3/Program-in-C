#include<stdio.h>

int main()
{
    int N,M,i;
    printf("Enter Value of N:\n ");
    scanf("%d",&N);
    printf("Enter Dividor:\n ");
    scanf("%d",&M);
    printf("Divisible Numbers of %d till %d are:\n", M,N);

    for (int i=1; i<=N; i++)
    {
        if (i%M==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

