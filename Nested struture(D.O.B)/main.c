Write a C program to print date of birth using nested structure?

#include <stdio.h>
struct date
{
    int day, year;
    char month[15];
};

struct student
{
    char name[20];
    int roll;
    struct date dob;
} s1[2], s2;

void main()
{
    int i;
    for (i = 0; i < 2; i++)
    {
        printf("Enter name, roll no, day, month, year: ");
        scanf("%s %d %d %s %d", s1[i].name, &s1[i].roll, &s1[i].dob.day, s1[i].dob.month, &s1[i].dob.year);
    }
    for(i=0;i<2;i++)
    {
        printf("Name:%s \n",s1[i].name);
        printf("Roll no.:%d\n",s1[i].roll);
        printf("DOB:%d ",s1[i].dob.day);
        printf("%s ",s1[i].dob.month);
        printf("%d\n",s1[i].dob.year);
    }
}

