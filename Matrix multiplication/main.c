Write a C prgm to multiply 2 matices by reading values from the user?

#include <stdio.h>
void main()
{
    int A[10][10],B[10][10],product[10][10];
    int row1,col1,row2,col2,i,j,k;

    printf("Enter the order of the first matrix: \n");
    scanf("%d %d",&row1,&col1);

    printf("Enter the order of the second matrix: \n");
    scanf("%d %d",&row2,&col2);

    if(col1!=row2)
        printf("Invalid input. Matrices cannot be multiplied.\n");

    printf("Enter the values of the first matrix: \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
            scanf("%d",&A[i][j]);
    }

    printf("Enter the values of the second matrix: \n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
            scanf("%d",&B[i][j]);
    }

    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            product[i][j]=0;
            for(k=0;k<col1;k++)
            {
                product[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    printf("Product of Matrix: \n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
            printf("%d  ", product[i][j]);
        printf("\n");
    }


}
