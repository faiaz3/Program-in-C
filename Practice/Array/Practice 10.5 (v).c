//hoy nai
#include<stdio.h>

int main()
{
    int N;
    int i,count=0, flag=0;
    printf("Enter Array Size: ");
    scanf("%d", &N);
    int array[N];
    int prime[count];

    for (i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i=0; i<N; i++)
    {
        for (int j=2; j<(array[i]/2); j++)
        {
            if(array[i]%j==0)
            {
                flag++;
            }
        }
        if (flag==0)
        {
                count++;
                prime[i]=array[i];
        }
    }

    printf("%d\n", count);

    for(i=0; i<count; i++)
    {
        printf("%d ", prime[i]);
    }

    return 0;
}
