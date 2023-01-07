#include<stdio.h>

int main()
{
    int N;
    int i,flag=0;
    printf("Enter Array Size: ");
    scanf("%d", &N);
    int array[N];

    for (i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i=0; i<N; i++)
    {
        if(array[i]==array[i+1])
        {
            flag++;
            if(flag == N-1) break;
        }
    }

    if(flag==N-1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
