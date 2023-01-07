#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    double marks;
};

void printstudent(int n, struct Student s)
{
    printf("Information of Student %d\n", n);
    printf("Roll -> %d\n", s.roll);
    printf("Name -> %s\n", s.name);
    printf("Marks -> %.1lf\n", s.marks);
}

int main()
{
    struct Student cls[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &cls[i].roll);
        scanf("%s", cls[i].name);
        scanf("%lf", &cls[i].marks);
    }

    double summ = 0;

    for (i = 0; i < 5; i++)
    {
        printstudent(i, cls[i]);
    }

    for (i = 0; i < 5; i++)
    {
        if (cls[i].roll % 2 == 0)
        {
            summ += cls[i].marks;
        }
    }

    printf("Total marks %.1lf\n", summ);

    return 0;
}