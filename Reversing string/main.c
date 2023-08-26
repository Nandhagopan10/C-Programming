Write a C program to reverse a string? 

#include <stdio.h>
void main()
{
    char str[20],rev[20];
    int i,j,count=0;
    printf("Enter a string: \n");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
        count++;
    for(i=0,j=count-1;j>=0;j--,i++)
    {
        rev[j]=str[i];
    }
    rev[count]='\0';

    printf("Reversed string: %s\n",rev);
}

