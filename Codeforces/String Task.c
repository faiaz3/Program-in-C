#include<stdio.h>
#include<string.h>

int main()
{
    char s[102];
    int i;
    fgets(s, sizeof(s), stdin);

    for (i=0; i<strlen(s)-1; i++) //s-1 to not print . in the end or null value
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32; //capital to small convert
        }
        if (!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'))
        {
            printf(".%c",s[i]);
        }
    }
    return 0;
}
