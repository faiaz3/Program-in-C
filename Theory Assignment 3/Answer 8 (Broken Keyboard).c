#include<stdio.h>
#include<string.h>

void broken_keyboard(char String[])
{
    for(int i=0; i<strlen(String); i++)
    {
        printf("%c", String[i]);
        if(i%2!=0)
        printf("%c", String[i]);
    }
}

int main()
{
    char S[50];
    scanf("%s", S);

    broken_keyboard(S);

    return 0;
}