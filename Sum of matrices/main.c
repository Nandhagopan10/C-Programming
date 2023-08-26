Write a C prgm to add 2 matices by reading values from the user?

#include <stdio.h>
void main()
{
    int A[5][5],B[5][5],sum[5][5];
    int a,b,c,d,i,j;

    printf("Enter the order of the first matrix: \n");
    scanf("%d %d",&a,&b);

    printf("Enter the order of the second matrix: \n");
    scanf("%d %d",&c,&d);
      if (a!=c || b!=d)
    {
        printf("Matrix addition not possible. Invalid dimensions.\n");
        return 0;
    }
    printf("Enter the values of the first matrix: \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
            scanf("%d",&A[i][j]);
    }

    printf("Enter the values of the second matrix: \n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
            scanf("%d",&B[i][j]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
            sum[i][j]=A[i][j]+B[i][j];
    }

    printf("Output matrix: \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
            printf("%d  ", sum[i][j]);
        printf("\n");
    }
}

