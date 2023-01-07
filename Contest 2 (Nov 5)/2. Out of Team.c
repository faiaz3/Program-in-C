#include<stdio.h>

int main()
{
    int N,K,i;
    scanf("%d %d", &N,&K);
    int Run[100];

    for (i=1; i<=N; i++)
    {
        scanf("%d",&Run[i]);
    }
    int disqualify =0;

    for(i=1; i<=N; i++)
    {
        if(Run[i]<K)
            disqualify++;
    }
    printf("%d\n",disqualify);

    return 0;
}
