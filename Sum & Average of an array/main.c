Write a C program to read two array from user and show the sum and average of two arrays?
    
#include <stdio.h>
void main()
{

    int limit,i;
    float a[100],sum=0,average;
    printf("Enter the limit: \n");
    scanf("%d",&limit);
    printf("Enter the integers: \n");
    for(i=0;i<limit;i++)
    {

        scanf("%f",&a[i]);
        sum=sum+a[i];
    }
    printf("%f is the sum \n",sum);
    average=sum/limit;
    printf("%f is the average \n",average);
}
