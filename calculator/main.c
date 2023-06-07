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

