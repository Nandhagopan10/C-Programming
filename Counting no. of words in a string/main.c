Write a C program to count no. of words in a string?

#include <stdio.h>
void main() {
    char string[100];
    int i,count=0;
    printf("Enter a sentence: \n");
    scanf("%[^\n]", string);  // Read the whole line including spaces
    for(i = 0;string[i]!='\0';i++)
    {
        if(string[i] == ' ')
            count++;
    }
    count++;  // Increment count for the last word

    printf("No. of words is %d\n", count);

}

