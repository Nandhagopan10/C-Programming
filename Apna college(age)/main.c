#include <stdio.h>
void main()
{
    int age=22;
    int *ptr=&age;
    printf("%d\n",age);
    printf("%d\n",&age);
    printf("%d\n",ptr);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
}
Results:
22
6422044
6422044
6422032
22
22
