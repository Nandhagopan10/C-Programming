#include <stdio.h>
void main()
{
    int price=100;
    int *ptr=&price;
    int **pptr=&ptr;
    printf("%d\n",ptr);
     printf("%d\n",*ptr);
      printf("%d\n",&ptr);
       printf("%d\n",pptr);
        printf("%d\n",*pptr);
         printf("%d\n",**pptr);
          printf("%d\n",&(**pptr));
}

Result:
6422036
100
6422024
6422024
6422036
100
6422036
