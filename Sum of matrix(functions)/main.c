Write a C program to find sum of 2 matrix using functions? 

#include <stdio.h>
void  read(int [][5],int,int);
void sum(int [][5],int [][5],int [][5],int,int);
void display(int [][5],int,int);
void main()
{
    int a[5][5],b[5][5],result[5][5],choice,m1,n1,m2,n2;
       printf("Enter matrix sizes:\n");
        scanf("%d %d",&m1,&n1);
        printf("Enter 1st matrix:\n");
        read(a,m1,n1);
        printf("Enter 2nd matrix:\n");
        read(b,m1,n1);
        sum(a,b,result,m1,n1);
        printf("Sum of matrix:\n");
        display(result,m1,n1);
}
void read(int x[][5],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
          scanf("%d",&x[i][j]);
    }
}
void display(int x[][5],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
          printf("%d\t",x[i][j]);
          printf("\n");
    }
}
void sum(int x[][5],int y[][5],int sum[][5],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
          sum[i][j]=x[i][j]+y[i][j];
    }
}
