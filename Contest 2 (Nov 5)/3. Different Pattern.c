#include <stdio.h>

int main() {

    int N;
    scanf("%d",&N);
    int i,j;

    for (i=1; i<=N; i++)
    {

        for (j=i; j>=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
