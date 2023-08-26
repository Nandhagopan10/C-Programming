Write a C program to check whether the number is odd or even?

#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d",&num);
    if(num%2==0)
        printf("The number is even");
    else
        printf("The number is odd");
}
