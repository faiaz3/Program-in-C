#include <stdio.h>
int main()
{
    FILE *inputFile;
    inputFile = fopen("input.txt", "r");
    if(inputFile==NULL)
    {
        printf("No File Found!!\n");
        return 0;
    }

    FILE *outputFile;
    outputFile = fopen("output.txt", "w");

    int n;
    fscanf(inputFile, "%d", &n);

    int sum = 0;

    for (int i=0; i<n; i++)
    {
        int a;
        fscanf(inputFile, "%d", &a);
        sum+=a;
    }

    fprintf(outputFile, "Sum -> %d", sum);

    return 0;
}