#include<stdio.h>

int main()
{
    int N;
    int i,j,v;
    printf("Enter Array Size: ");
    scanf("%d", &N);
    int array[N];

    for (i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
    int Q;
    printf("\nEnter Query: ");
    scanf("%d", &Q);

    for (j=0; j<Q; j++)
    {
        scanf("%d %d",&i, &v);
        array[i]+=v;
    }
    printf("Updated Array:\n");

    for (i=0; i<N; i++){
        printf("%d ",array[i]);
    }

    return 0;
}
