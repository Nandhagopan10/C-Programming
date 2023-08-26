Write a C program to check whether a number is negative or positive and find the sum and count of each?
#include <stdio.h>
void main()
{
    char letter;
    int num, sum1=0, sum2=0, count1=0, count2=0;
    do {
        printf("Enter a number: \n");
        scanf("%d",&num);
        if(num>0)
        {
            count1++;
            sum1=sum1+num;
        }
        else if(num<0)
        {
            count2++;
            sum2=sum2+num;
        }
        printf("Do you want to continue? \nPrint Y or N: \n");
        scanf(" %c",&letter); // added a space before %c to consume newline character
    } while(letter == 'Y' || letter == 'y'); // fixed the while loop condition

    printf("Sum and number of positive numbers: %d, %d\n", sum1, count1);
    printf("Sum and number of negative numbers: %d, %d\n", sum2, count2);


}
