#include <stdio.h>

int main()
{
    unsigned int x, y;
    printf("Enter two non negative integers between 0 and 100:\n");
    scanf("%d %d", &x, &y);

    if (0 >= x, y && x, y >= 100)
    {
        printf("Invalid selection! Please select within valid range:\n");
        scanf("%d %d", &x, &y);
        printf("Multiplication of %d and %d =%d", x, y, x * y);
    }
    else
    {
        printf("Multiplication of %d and %d =%d", x, y, x * y);
    }
    return 0;
}
