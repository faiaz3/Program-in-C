#include<stdio.h>

int main()
{
    int N;
    int i,sum=0;
    printf("Enter Array Size: ");
    scanf("%d", &N);
    int array[N];

    for (i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i=0; i<N; i++)
    {
        if(array[i]%2!=0)
        {
            sum+=array[i];
        }
    }

    if (sum%2==0)
    {
        printf("Yes");
    }
    else
            printf("No");

    return 0;
}
