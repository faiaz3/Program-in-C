#include<stdio.h>
int main ()
{
    int T,i,X, Time;
    scanf("%d",&T);
    for (i=1; i<= T; i++)
    {
{
    scanf("%d%%",&X) ;
    if (60 >= X)
    {
        Time= 60-X;
        X+=60-X;
    }

    if (80 >= X && 60 <= X)
    {
        Time= Time+(80-X)* 2;
        X+=80-X;
    }

    if (100>=X&&X>=80)
    {
        Time=Time+(100-X)*3;
    }
    }
    printf("%d minutes \n", Time) ;
    Time=0;
    }
}
