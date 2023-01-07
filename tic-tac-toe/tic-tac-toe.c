#include <stdio.h>
#include <stdbool.h>

void printCell(int a[][4], int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i][j] == -1)
                printf(" ");
            if (a[i][j] == 1)
                printf("X");
            if (a[i][j] == 2)
                printf("O");
            if (j < n)
                printf("\t|\t");
        }

        printf("\n");
        if (i < n)
            printf("____________________________");
        printf("\n\n");
    }
}

int main()
{
    int n = 3, i, j;
    int a[4][4];

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            a[i][j] = -1;
        }
    }

    bool player1 = true;
    bool player2 = false;

    while (true)
    {
        printCell(a, n);
        if (player1 == true)
        {
            int r, c;
            Flag:
            printf("Player 1's Turn (X), Enter Row and Column: ");
            scanf("%d %d", &r, &c);

            if (a[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag;
            }
            a[r][c] = 1;

            player1 = false;
            player2 = true;
        }
        else
        {
            int r, c;
            Flag2:
            printf("Player 2's Turn (O), Enter Row and Column: ");
            scanf("%d %d", &r, &c);

            if (a[r][c] != -1)
            {
                printf("Invalid Cell\n");
                goto Flag2;
            }
            a[r][c] = 2;

            player2 = false;
            player1 = true;
        }
    }

    return 0;
}