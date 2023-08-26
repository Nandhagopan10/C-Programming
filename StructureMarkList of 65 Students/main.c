Write a C program to print marklist of students in a class using structure?
#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    int mark[5];
    int total;
} st[65], temp;

void main()
{
    int i, j;

    for (i = 0; i < 65; i++)
    {
        printf("Enter name & roll no: ");
        scanf("%s %d", st[i].name, &st[i].roll);

        printf("Enter marks: ");
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &st[i].mark[j]);
            st[i].total += st[i].mark[j];
        }
    }

    for (i = 0; i < 64; i++)
    {
        for (j = 0; j < (65 - i - 1); j++)
        {
            if (st[j].total < st[j + 1].total)
            {
                temp = st[j];
                st[j] = st[j + 1];
                st[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 65; i++)
    {
        printf("%20s", st[i].name);
        printf("%4d", st[i].roll);
        printf("%4d\n", st[i].total);
    }
}

