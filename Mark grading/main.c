Write a C  program to read mark from user and print resultant grade?

#include <stdio.h>
void main()
{
    int mark;
    printf("Enter your marks: \n");
    scanf("%d",&mark);
    if(mark>=90)
    {
        printf("The grade is S \n");
    }
    else if(mark>=80)
    {
        printf("The grade is A \n");
    }
    else if(mark>=75)
    {
        printf("The grade is B+ \n");
    }
    else if(mark>=70)
    {
        printf("The grade is B \n");
    }
    else if(mark>=65)
    {
        printf("The grade is C+ \n");
    }
    else if(mark>=60)
    {
        printf("The grade is C \n");
    }
    else
    {
        printf("The student is just passed \n");
    }
}

