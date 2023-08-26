Write a C program to print the smallest element in each array?

#include <stdio.h>
void main()
{
    int m,n,matrix[10][10],i,j,smallest;
    printf("order of matrix:\n");
    scanf("%d %d",&m,&n);
    printf("enter the elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&matrix[i][j]);
    }
    printf("smallest element in each rows:\n");
     for(i=0;i<m;i++)
    {
        smallest=matrix[i][0];
        for(j=0;j<m;j++)
        {
            if(matrix[i][j]<smallest)
            {
                smallest=matrix[i][j];
            }
        }
            printf("%d\n",smallest);
    }
    printf("\n");
}
