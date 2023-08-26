Write a C program to find an element using linear search?

#include <stdio.h>
void main()
{
    int limit,i,a[100],searchKey,flag=0;
    printf("Enter the limit: \n");
    scanf("%d",&limit);
    printf("Enter the integers: \n");
    for(i=0;i<limit;i++)
        scanf("%d",&a[i]);
    printf("Enter the searchkey: \n");
    scanf("%d",&searchKey);
    for(i=0;i<limit;i++)
    {

        if(searchKey==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("Value found at %d position \n",i+1);
    else
        printf("Value not found \n");
}
