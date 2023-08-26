Write a Cprogram to print fibanocci series?
    
#include <stdio.h>
void main()
{
    int n,f0=0,f1=1,fn,i=1;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    printf("The fibanocci numbers are: \n");
    do
    {

        printf("%d \n",f0);
        fn=f0+f1;
        f0=f1;
        f1=fn;
        i++;
    }while(i<=n);
}
