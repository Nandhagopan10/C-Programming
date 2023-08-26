Write a  C program to compare 2 strings?
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char str1[20],str2[20],temp[20];
    int i,j,len1=0,len2=0;
    printf("Enter the first string: \n");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0';i++)
        len1++;
    printf("Enter the second string: \n");
    scanf("%s",str2);
    for(i=0;str2[i]!='\0';i++)
        len2++;
    for(i=0;i<len1&&len2;i++)
    {
        if(str1[i]!=str2[i])
        {
            for(j=0;j<=len1;j++)
            {
                temp[j]=str1[j];
                str1[j]=str2[j];
                str2[j]=temp[j];
            }
        }
        break;
    }
    printf("The sorted array are: %s,%s",str1,str2);
}
