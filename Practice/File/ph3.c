#include<stdio.h>
int main()
{
    FILE *logFile = fopen("log.txt", "a");
    FILE *inputFile = fopen ("heda.txt", "r");
    if(inputFile==NULL)
    {
        fprintf(logFile, "Input file not found");
        return 0;
    }

    fclose(inputFile);
    return 0;
}