Write a C program to find sum of first n numbers using recursion?

#include <stdio.h>
int sum(int);

void main()
{
    int x, ans;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &x);
    ans = sum(x);
    printf("Sum is: %d\n", ans);
}

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}


