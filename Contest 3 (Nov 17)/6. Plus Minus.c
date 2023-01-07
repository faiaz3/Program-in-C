//Plus Minus
#include<stdio.h>
#include<string.h>


int main()
{
    int N;
    scanf("%d", &N);

    char S[100];
    scanf("%s",S);

    int i,count1=0, count2=0;

    for(i=0; i<N; i++)
    {
        if(S[i] == '+')
        {
            if(S[i+1] == '+')
                count1++;
        }
        else if(S[i] == '-')
        {
            if(S[i+1] == '-')
                count2++;
        }
    }

    if(count1>count2)
    {
        printf("%d\n", count1);
    }
    else
    {
        printf("%d\n", count2);
    }

    return 0;
}
