#include <stdio.h>
int main()
{
    int i, j, ans;
    scanf("%d %d", &i, &j);

    if (i == 1 && j == 1) // 1 row 1 column cannot hold a 2 size domino
        ans = 0;
    else if (i == 1 && j > 1) // 1 row and more than 1 column
        ans = j - 1;
    else if (i > 1 && j == 1) // more than 1 row but 1 column
        ans = j - 1;
    else if (i > 1 && j > 1)
        ans = (m - 1) * n;

    printf("%d\n", ans);

    return 0;
}