Write a C program to read two numbers from user and return its HCF ?

#include <stdio.h>
void main()
{
    int n1,n2,i,gcd;
    printf("Enter two numbers: \n");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    printf("GCD of %d & %d is %d",n1,n2,gcd);
}

