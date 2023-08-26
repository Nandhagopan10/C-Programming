Write a C program to find the count of vowels,consonants & spaces in a string?

#include <stdio.h>
void main()
{
    char str[50];
    int i,vowels=0,consonants=0,spaces=0;
    printf("Enter a string:\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]== 'i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            vowels++;
        else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
            consonants++;
        else
            spaces++;
    }
    printf("Number of vowels=%d \n",vowels);
    printf("Number of consonants=%d \n",consonants);
    printf("Number of spaces=%d \n",spaces);
}
