#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int sum = 0, count = 0;

    for (int i = 1; i <= N; i++)
    {
        count++;

        if (count == 4 || count == 5 || count == 6)
        {
            sum += i * (-1);

            if (count == 6)
                count = 0;
        }
        else
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
