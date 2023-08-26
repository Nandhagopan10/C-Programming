Write a C program to print all odd numbers between two limits?

#include <stdio.h>
void main() {
    int a, b, i;
    printf("Enter two limits: \n");
    scanf("%d,%d", &a, &b);

    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d \n", i);
    }
}

