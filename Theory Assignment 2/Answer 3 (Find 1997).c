//C Program to find 1,9,7 in a string of numbers

#include<stdio.h>
#include<string.h>

int find_197(char S[100])
{
    int i;
    int flag_one=0, flag_nine=0, flag_seven=0;

    for(i=0; i<strlen(S); i++)
    {
        if(S[i]=='1')
            flag_one=1;

        else if(S[i]=='9')
            flag_nine=1;

        else if(S[i]=='7')
            flag_seven=1;
    }

    if (flag_one==1 && flag_nine==1 && flag_seven==1)
        return 1;
    else
        return 0;
}

int main()

{
    char S[100];
    scanf("%s", S);

    if(find_197(S)==1)
        printf("Yes");
    else
        printf("No");

    return 0;
}
