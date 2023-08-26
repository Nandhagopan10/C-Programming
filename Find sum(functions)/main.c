Write a C program to find sum of two numbers using functions?

#include <stdio.h>

int find_sum(int, int);

void main()
{
    int a, b, sum;

    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);

    sum = find_sum(a, b);

    printf("Sum = %d\n", sum);

}

int find_sum(int x, int y)
{
    int ans;
    ans = x + y;
    return ans;
}

