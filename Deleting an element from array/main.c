Write a C program to delete an element from an array?

#include <stdio.h>
void main() {
    float a[10];
    int i,position;

    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++)
        scanf("%f", &a[i]);
    printf("Enter the position to be deleted:\n");
    scanf("%d",&position);
    position=position - 1;

    for(i = position;i<9;i++)
        a[i]=a[i+1];
    printf("New array is:\n");
    for(i=0;i<9;i++)
        printf("%f\n", a[i]);
}

