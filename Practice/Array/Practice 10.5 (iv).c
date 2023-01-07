#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int array[N];
    int i,j;

    for(i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }

    int k;
    scanf("%d", &k);

    int temp;

    for(i=0; i<N-1; i++)
    {
        for(j=0; j<N-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                temp= array[j];
                array[j]= array[j+1];
                array[j+1]= temp;
            }
        }
    }
    for(i=0; i<N; i++)
    {
        if(k==i)
        {
            printf("%d\n", array[i-1]);
            break;
        }
    }

    return 0;
}
