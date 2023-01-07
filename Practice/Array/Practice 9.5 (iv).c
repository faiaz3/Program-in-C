#include<stdio.h>

int main()
{
    int N;
    int i,j;
    printf("Enter Array Size: ");
    scanf("%d", &N);
    int array[N];

    for (i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n");
    for (i=0; i<N; i++)
    {
        printf("%d - ", array[i]);

        for(j=0; j<N; j++)
        {
            if(array[i]!=array[j])
            {
                printf("%d ", array[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
