Write a C program for linear search using functions?

#include <stdio.h>
int linSearch(int[], int, int);

void main()
{
    int i, a[10], n = 10, key, pos;
    printf("Enter the values:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    printf("Enter the key:\n");
    scanf("%d", &key);
    pos = linSearch(a, n, key);
    if (pos == -1)
        printf("Element doesn't exist\n");
    else
        printf("Element found at %d position\n", pos+1);

}

int linSearch(int x[], int y, int z)
{
    int i, j = -1;
    for (i = 0; i < y; i++)
    {
        if (x[i] == z)
        {
            j = i;
            break;
        }
    }
    return j;
}

