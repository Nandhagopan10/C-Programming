Write a C program to find the sum of two numbers?

#include <stdio.h>
void main()
{
    int num1,num2,sum;
    printf("Enter two numbers: \n");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("The sum is %d",sum);
}
