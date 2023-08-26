Write a C program to find the roots of quadratic equation?

#include <stdio.h>
#include<math.h>

void main()
{
    float a,b,c,n,root1,root2;
    printf("Enter the values of a,b,c: \n");
    scanf("%f %f %f",&a,&b,&c);
    n=(b*b)-(4*a*c);
    root1=((-b+sqrt(n))/(2*a);
    root2=((-b-sqrt(n))/(2*a);
    printf("The roots are %f,%f",root1,root2);
}
