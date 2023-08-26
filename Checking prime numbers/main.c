Write a Cprogram to read a number from the user and check whether it is a prime number?
#include <stdio.h>
void main()
{
    int a,i=2,count=0;
    printf("Enter a natural number: ");
    scanf("%d",&a);
    if(a==1)
        printf("The number is neither prime nor composite \n");
    else
    {
        while(i<=a/2)
        {
            if(a%i==0)
            {
                count=1;
                break;
            }
            i++;
        }
        if(count==0)
            printf("%d is a prime number \n",a);
        else
            printf("%d is not a prime number \n",a);
    }
}
