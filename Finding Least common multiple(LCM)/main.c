Write a C program to read two numbers from user and return its LCM ?

#include <stdio.h>
void main()
{
    int n1,n2,i,gcd,lcm;
    printf("Enter two numbers: \n");
    scanf("%d %d",&n1,&n2);
    for(i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    lcm=(n1*n2)/gcd;
    printf("LCM of %d & %d is %d",n1,n2,lcm);
}
