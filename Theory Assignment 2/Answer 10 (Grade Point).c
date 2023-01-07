#include<stdio.h>

char grade(int mark)
{
    char w='A', x='B', y='C', z='F';

    if (mark>=0 && mark<=39)
    {
        return z;
    }
    else if (mark>=40 && mark<=59)
    {
        return y;
    }
    else if (mark>=60 && mark<=79)
    {
        return x;
    }
    
    else if (mark>=80 && mark<=100)
    {
        return w;
    }
    else
    {
        printf("Invalid input\n");
    }
}

int main()
{
    int m;
    printf("Enter your mark: ");
    scanf("%d",&m);

    printf("%c\n",grade(m));

    return 0;
}