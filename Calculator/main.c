Write a C program to read 2 numbers from user and apply basic mathematical operations(+,-,*,/) to work like a calculator?
#include <stdio.h>
void main()
{
    float num1, num2, result;
    char opSelector;

    printf("Enter two numbers: \n");
    scanf("%f %f", &num1, &num2);

    printf("Enter your operation: +,-,*,/ : \n");
    scanf(" %c", &opSelector);

    switch(opSelector)
    {
        case '+':
            result = num1 + num2;
            printf("The result is %f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The result is %f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The result is %f", result);
            break;
        case '/':
            result = num1 / num2;
            printf("The result is %f", result);
            break;
        default:
            printf("Invalid operation");
            break;
    }


}

