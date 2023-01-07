#include <stdio.h>
#include <stdlib.h>
int main()
{

    unsigned int A, B, C;
    scanf("%u %u", &A, &B);

    C = A - B;

    printf("%u", abs(C));
    return 0;
}
