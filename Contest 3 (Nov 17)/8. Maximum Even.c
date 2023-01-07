#include<stdio.h>

int main()
{
    int N,i,j;
    scanf("%d",&N);
    int Arr[N];

    for(i=0; i<N; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int max,sum;

    for(i=0; i<N; i++)
    {
        if(Arr[i]%2 == 0)
        {
            if(Arr[i] > max)
            {
                max = Arr[i];
            }
        }
        for(j=i+1; j<N; j++)
        {
            sum= Arr[i]+Arr[j];
            if(sum%2 == 0)
            {
                if(sum > max)
                {
                    max = sum;
                }
            }

        }
    }
    printf("%d", max);


}
