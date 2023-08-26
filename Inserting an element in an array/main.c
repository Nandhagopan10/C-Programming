Write a C program to insert an element to an array?

#include <stdio.h>
void main() {
    float a[11], num;
    int j, i, position;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
        scanf("%f", &a[i]);

    printf("Enter the element and position to be inserted:\n");
    scanf("%f %d", &num, &position);

    for (j = 9; j >= position; j--)
        a[j + 1] = a[j];

    a[position - 1] = num;

    printf("New array is:\n");
    for (i = 0; i < 11; i++)
        printf("%f\n", a[i]);
}

