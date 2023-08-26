#include <stdio.h>
void swap(int a,int b);
void _swap(int *a,int *b);
void main()
{
    int x=3,y=5;
    swap(x,y);
    printf("x=%d & y=%d \n",x,y);
     swap(&x,&y);
    printf("x=%d & y=%d \n",x,y);
}
void swap(int a,int b)  //call by value
{
    int t=a;
    a=b;
    b=a;
    printf("a=%d & b=%d \n",a,b);
}
void _swap(int *a,int *b)  //call by reference
{
    int t=*a;
    *a=*b;
    *b=a;
}

Result:
    a=5 & b=5
x=3 & y=5
a=6422040 & b=6422040
x=3 & y=5
