#include<stdio.h>
int main()
{
    long long int N;
    long long int i,j,count=0;
    scanf("%lld",&N);

    for(i=1; i<N; i++)
    {
        for(j=i+1; j<=N; j++)
        {
            count++;
            printf("%lld %lld\n",i,j);
        }
    }

    printf("%lld\n",count);

    return 0;
}
