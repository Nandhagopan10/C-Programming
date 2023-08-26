Write the c prgm to find the sum & count of positive and negative numbers given by the user?

#include <stdio.h>
void main() {
  int num, sum1 = 0, sum2 = 0, count1 = 0, count2 = 0;
  char letter;
  do
  {
     printf("Enter a number: \n");
     scanf("%d", &num);
     if (num > 0)
     {
       count1++;
       sum1 += num;
     }
     else
     {
        count2++;
        sum2 += num;
     }
     printf("Do you wish to continue? Enter Y or N: ");
     scanf(" %c", &letter);  // Note the space before %c to consume the newline character

    }
    while (letter == 'Y' || letter == 'y');

    printf("Sum and number of positive numbers: %d, %d\n", sum1, count1);
    printf("Sum and number of negative numbers: %d, %d\n", sum2, count2);


}

