Write a C program to check whether the number is an Amstrong or not(any no. of digits)?
    
#include <stdio.h>
#include<math.h>
void main()
{

    int i,n,test,dig,typ,num;
    int count=0,sum=0;
    printf("Enter a number: \n");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    test=num;
    while(test>0)
    {
        dig=test%10;
        typ=1;
        for(i=1;i<=count;i++)
            typ=typ*dig;
        sum=sum+typ;
        test=test/10;
    }
    if(sum==num)
        printf("%d is an Armstrong number",num);
    else
        printf("%d is not an Armstrong number",num);
}
