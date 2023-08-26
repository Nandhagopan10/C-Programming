Write a C program to find the sum of two distances using structures?

#include <stdio.h>
struct dist
{
    int metre,cm;
}d1,d2,result;
void main()
{
    printf("Enter the first distance in m & cm: \n");
    scanf("%d %d",&d1.metre,&d1.cm);
    printf("Enter the second distance in m & cm: \n");
    scanf("%d %d",&d2.metre,&d2.cm);
    result.metre=d1.metre+d2.metre;
    result.cm=d1.cm+d2.cm;
    if(result.cm>=100)
    {
        result.cm=result.cm-100;
        result.metre++;
    }
    printf("Sum of distances=%d m %d cm",result.metre,result.cm);
}
