Write a C program to  find the smallest number in a matrix using functions?
#include <stdio.h>

float smallest(float[], int);

void main()
{
    int n, i;
    float a[20], least;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the values: \n");
    for (i = 0; i < n; i++)
        scanf("%f", &a[i]);
    least = smallest(a, n);
    printf("least = %f\n", least);
}

float smallest(float x[], int n)
{
    float b = x[0];  // Initialize b with the first element
    int i;
    for (i = 1; i < n; i++)  // Start the loop from index 1
    {
        if (x[i] < b)
            b = x[i];
    }
    return b;
}

