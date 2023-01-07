int main()
{
    int N;
    int i,j;
    printf("Enter Array Size: ");
    scanf("%d", &N);
    int array[N];

    for (i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i=0; i<N; i++)
    {
        if(array[i]==array[i+1])
        {
            printf("Invalid\n");
            return 0;
        }
        else
        {
            int target;
            printf("Enter target:\n");
            scanf("%d", &target);

            for(j=0; j<N; j++)
            {

                if(array[i]+array[i+1]==target)
                {
                    printf("Yes");
                    return 0;
                }
                else
                {
                    printf("No");
                    return 0;
                }
            }
        }
    }
}
