#include<stdio.h>

void separate(int N)
{
    int x= (N-12)/4; //x+(x+2)+(x+4)+(x+6)=N
    int A,B,C,D;
    A=x; B=x+2; C=x+4; D=x+6;

    printf("%d %d %d %d\n",A,B,C,D);
}

int main()
{
    int T;
    scanf("%d", &T);

    for(int i=0; i<T; i++)
    {
        int N;
        scanf("%d", &N);
        separate(N);
    }
}