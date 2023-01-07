//C program to shift characters of a given string by n value:

#include<stdio.h>
#include<string.h>

int main()
{
    char S[20];
    scanf("%s", S);

    int n;
    scanf("%d", &n);

    int i;
    for(i=0; i<strlen(S); i++)
    {
        S[i]+=n;
        if(S[i]>122)
        S[i]-=26;
    }

    printf("%s\n", S);

    return 0;
}