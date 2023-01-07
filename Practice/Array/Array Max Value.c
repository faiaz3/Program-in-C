#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int ara[N],i,j;

    for(i=0; i<N; i++)
    {
        scanf("%d",&ara[i]);
    }
    int max = ara[0],sum;
    for(i=0; i<N; i++)
    {
        if(ara[i]>max)
        {
            max=ara[i];
        }
        for(j=i+1; j<N; j++)
        {
            sum= Arr[i]+Arr[j];
            if(sum%2==0)
            {
                if(sum>max)
                {
                    max=sum;
                }
            }
        }
    }

    printf("%d\n",max);
    return 0;
}
