Write a C prgm to read a alphabet from user and change its case ?
    
#include <stdio.h>
void main()
{

    int diff=32;
    char letter;
    printf("Enter the character: \n");
    scanf("%c",&letter);
    if((letter>=65)&&(letter<=97))
    {
        printf("%c is in upper case \n",letter);
        printf("The lower case is %c \n",letter+32);
    }
    else if((letter>=97)&&(letter<=122))
    {
        printf("%c is in lower case \n",letter);
        printf("The upper case is %c \n",letter-32);
    }
    else
    {
        printf("%c is an invalid character \n",letter);
    }
}
