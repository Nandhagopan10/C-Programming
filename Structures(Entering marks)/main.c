Write a C program to find the student with highest marks using structure?
#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    int mark[5];
}S1, S2;
void main()
{
    int i, tot1 = 0, tot2 = 0;
    printf("Enter the name of student 1: ");
    scanf("%s", S1.name);
    printf("Enter the roll number of student 1: ");
    scanf("%d", &S1.roll);
    printf("Enter 5 marks for student 1: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &S1.mark[i]);
        tot1 += S1.mark[i];
    }

    printf("Enter the name of student 2: ");
    scanf("%s", S2.name);
    printf("Enter the roll number of student 2: ");
    scanf("%d", &S2.roll);
    printf("Enter 5 marks for student 2: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &S2.mark[i]);
        tot2 += S2.mark[i];
    }

    printf("Person with the highest marks is: \n");
    if (tot1 > tot2)
    {
        printf("Name: %s\n", S1.name);
        printf("Roll no.: %d\n", S1.roll);
    }
    else
    {
        printf("Name: %s\n", S2.name);
        printf("Roll no.: %d\n", S2.roll);
    }
}

