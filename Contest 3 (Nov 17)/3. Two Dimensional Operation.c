#include<stdio.h>

int main()
{
    int N,M;
    int i,j;
    scanf("%d %d", &N, &M);
    int Arr[N][M];

    for (i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    printf("\n");

    for (i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            if(i+1==j+1 && Arr[i][j]==i+1)
            {
                Arr[i][j]+=3;
            }
            else
            {
                if(Arr[i][j]==i+1)
                {
                    Arr[i][j]+=2;
                }
                else if(Arr[i][j]==j+1)
                {
                    Arr[i][j]++;
                }
            }
        }
    }

    for (i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
