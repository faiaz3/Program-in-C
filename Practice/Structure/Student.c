#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int age;
    float weight;
};

int main()
{
    struct Student s1 = {12, "Farhan Feroz", 24, 75.6};
    struct Student s2 = {.weight = 60, .roll = 109, .age = 22, .name = "Faiaz Khan"}; //designated
    // s.roll = 12;
    // s.age = 24;
    // s.weight = 75.6;

    printf("ID: %d\nName: %s\nAge: %d\nWeight: %f\n", s1.roll, s1.name, s1.age, s1.weight);
    printf("ID: %d\nName: %s\nAge: %d\nWeight: %f\n", s2.roll, s2.name, s2.age, s2.weight);

    return 0;
}