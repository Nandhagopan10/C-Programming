Write a C program to find factorial of given no. of numbers using recursion?

#include<stdio.h>
int fact(int);
void main()
{
    int x,ans;
    printf("Enter the number: \n");
    scanf("%d",&x);
    ans=fact(x);
    printf("Factorial: %d \n",ans);
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

