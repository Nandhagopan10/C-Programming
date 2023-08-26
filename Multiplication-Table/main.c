Write a C prgm to print the multiplication table of the number given by the user?

#include <stdio.h>
void main()
{
    int n,i;
    printf("Enter the number: \n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d \n",i,n,i*n);
    }
}
