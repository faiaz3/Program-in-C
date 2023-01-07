#include<stdio.h>

int main ()
{
    int N,x;
    int array[200001];
    int i;

    scanf("%d",&N);

    for(i=1; i<N; i++)
    {
        scanf("%d",&x);
        array[x]= 1;
    }
    for(i=1; i<N; i++)
    {
        if(array[i]==0){
            printf("%d\n",i);
        }
    }

    return 0;
}
