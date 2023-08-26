Write a C program to check whether the string is palindrome or not?

#include <stdio.h>
void main()
{
    int i,leng=0,flag=0;
    char word[100];
    printf("Enter a word:\n");
    scanf("%s",word);
    for(i=0;word[i]!='\0';i++)
        leng++;
    for(i=0;i<leng/2;i++)
    {
        if(word[i]!=word[leng-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("%s is a palindrome\n",word);
    else
        printf("%s is not a palindrome\n",word);
}
