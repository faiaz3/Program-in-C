#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int ara[N],i;

    for(i=0; i<N; i++)
    {
        scanf("%d",&ara[i]);
    }
    int count=0;
    for(i=0; i<N; i++)
    {
        if(ara[i]%2==0)
        {
            count++;
        }
    }

    printf("Even= %d\n",count);
    printf("Odd= %d\n",N-count);
    return 0;
}

