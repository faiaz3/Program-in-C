#include<stdio.h>

int main()
{
    int T;
    int count, N;
    int i,j;
    scanf("%d", &T);
    char S[1000];

    for(i=0; i<T; i++)
    {
        count=0;
        scanf("%d", &N);
        scanf("%s", S);

        for(j=0; j<N; j++)
        {
            if(S[j] == '0') {
                if(S[j+1] == '1')
                    count++;
            } else if(S[j] == '1') {
                if(S[j+1] == '0')
                    count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
