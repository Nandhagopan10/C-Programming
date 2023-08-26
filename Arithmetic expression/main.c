Write a Cprogram to find the solution of arithmetic expression x=((a-b)/(cd+e)(fg)?
#include <stdio.h>
#include<math.h>

void main()
{
    float a,b,c,d,e,f,g,x;
    printf("Enter the values of a,b,c,d,e,f,g: \n");
    scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
    x=((a-b/c*d+e)*(f+g));
    printf("The solution of  the expression is %f",x);
}
