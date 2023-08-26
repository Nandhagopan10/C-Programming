Write a C program to :-
Define a structure employee with ID,name,basic salary,designation & allowance, where allowance is an union variable with 2 fields - percent(float) & amount(int). I f the designation is manager the allowance is expressed as a percentage of basic salary. Otherwise, the allowance is an integer amount. Calculate the total amount disbursed under the head allowance for a company with 50 employees?

#include <stdio.h>
#include <string.h>
union allow
{
    float percent;
    int amount;
};

struct Employee
{
    int ID;
    char name[20];
    float basicSalary;
    char designation[20];
    union allow allowance;
} Emp[50];

void main()
{
    int i;
    float mSalary, amount1 = 0, otherSalary, amount2 = 0, total = 0; // Initialize variables to 0
    for (i = 0; i < 50; i++)
    {
        printf("Enter the name & designation:\n");
        scanf("%s %s", Emp[i].name,Emp[i].designation);
        printf("Enter the ID & basicSalary:\n");
        scanf("%d %f", &Emp[i].ID, &Emp[i].basicSalary);

        // Compare the designation with "Manager" or "manager" using strcmp
        if (strcmp(Emp[i].designation, "Manager") == 0 || strcmp(Emp[i].designation, "manager") == 0)
        {
            printf("Enter the percentage of b.s:\n");
            scanf("%f", &Emp[i].allowance.percent);
            mSalary = Emp[i].basicSalary + Emp[i].basicSalary * (Emp[i].allowance.percent / 100);
            amount1 += mSalary;
        }
        else
        {
            printf("Enter the amount of b.s:\n");
            scanf("%f", &Emp[i].allowance.amount);
            otherSalary = Emp[i].basicSalary + Emp[i].allowance.amount;
            amount1 += otherSalary;
        }
    }
      total = amount1 + amount2;
        printf("The total allowance is: %f\n", total);

}

