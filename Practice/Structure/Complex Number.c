#include <stdio.h>
struct Comp
{
    double real;
    double img;
};

void printcomp(struct Comp c)
{
    printf("%.1lf + %.1lfi", c.real, c.img);
}

struct Comp add_comp(struct Comp a, struct Comp b)
{
    struct Comp ans;
    ans.real = a.real + b.real;
    ans.img = a.img + b.img;

    return ans;
}

struct Comp mul_comp(struct Comp a, struct Comp b)
{
    struct Comp ans;
    ans.real = a.real * b.real - a.img * b.img;
    ans.img = a.real * b.img + b.real * a.img;

    return ans;
};

int main()
{
    struct Comp c1 = {5.9, 3.1};
    struct Comp c2 = {-2.5, 3.7};

    printcomp(add_comp(c1, c2));
    printf("\n");
    printcomp(mul_comp(c1, c2));

    return 0;
}