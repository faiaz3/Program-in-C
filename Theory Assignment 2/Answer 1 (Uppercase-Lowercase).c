//C program to convert uppercase to lowercase and vice versa

#include<stdio.h>
#include<string.h>

int main()
{
    char S[100];
    scanf("%s",S);
    int i;

    for(i=0; i<strlen(S); i++)
    {
        if(S[i]>=65 && S[i]<97)
        {
            S[i]+=32;
        }
        else if(S[i]>=97 && S[i]<=122)
        {
            S[i]-=32;
        }
    }

    printf("%s",S);

    return 0;
}