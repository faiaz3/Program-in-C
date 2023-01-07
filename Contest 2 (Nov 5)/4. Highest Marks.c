#include<stdio.h>

int main()
{
    int N,i;
    scanf("%d",&N);
    int array[N];
    int max = -99999;

    for(i=0; i<N; i++)
    {
        scanf("%d",&array[i]);
        if(array[i]>max)
        {
            max=array[i];
        }
    }

    /*for(i=0; i<N; i++)
    {
    }*/
    for(i=0; i<N; i++)
        {
            array[i]= max - array[i];
            printf("%d ",array[i]);
        }
    return 0;
}
