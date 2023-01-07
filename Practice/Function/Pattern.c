#include<stdio.h>

void print_hash(int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("#");
    }
    printf("\n");
} 

int main()
{
    int N;
    scanf("%d", &N);

    int i;

    for(i=1; i<=N; i++)
        print_hash(i);

    return 0;
}