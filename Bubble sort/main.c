Write a C program to read an array from user and arrange it in ascending order using bubble sort?
    
#include <stdio.h>
void main()
{
    int n,a[100],i,j,temp;
    printf("Enter the number of integers in the array: \n");
    scanf("%d",&n);
    printf("Enter the integers: \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
    printf("The sorted array is: \n");
    for(i=0;i<n;i++)
        printf("%d \n",a[i]);
}
