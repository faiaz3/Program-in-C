//something wrong
#include <stdio.h>

struct Point
{
    float x;
    float y;
};

struct Point mid(struct Point m, struct Point n)
{
    struct Point ans;
    ans.x = (m.x + n.x) / 2;
    ans.y = (m.y + n.y) / 2;

    return ans;
};

int main()
{
    struct Point p1, p2;
    scanf("%d %d", &p1.x, &p1.y);
    scanf("%d %d", &p2.x, &p2.y);

    struct Point p3;
    p3 = mid(p1, p2);

    printf("%0.2f, %0.2f", p3.x, p3.y);

    return 0;
}