Write a C program to concatinate 2 strings without using library functions?

#include <stdio.h>
void main()
{
    int i,j;
    char str1[30],str2[30];
    printf("Enter the first string:\n");
    scanf("%s",str1);
    printf("Enter the second string:\n");
    scanf("%s",str2);
    for(i=0;str1[i]!='\0';i++);
    for(j=0;str2[j]!='\0';i++,j++)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
    printf("Output is: %s\n",str1);
}
