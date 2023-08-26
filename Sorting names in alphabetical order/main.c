Write a C program to to sort names in alphabetical order? 

#include <stdio.h>
#include <string.h>

void main()
{
    int i,j;
    char name[10][20],temp[20];
    printf("Enter 10 names: \n");
    for(i=0;i<10;i++)
        scanf("%s",name[i]);
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(strcmp(name[j],name[j+1])>0)
            {
                strcpy(temp,name[j]);
                strcpy(name[j],name[j+1]);
                strcpy(name[j+1],temp);
            }
        }
    }
    printf("Names in alphabetical order: \n");
    for(i=0;i<10;i++)
        printf("%s\n", name[i]);
}

