Write a C program to find area of circle?
//Area of circle

#include <stdio.h>
#define PI 3.147

void main()
{
   float r,area;
   printf("Enter the radius of the circle: \n");
   scanf("%f",&r);
   area=PI*r*r;
   printf("The area of circle is %f",area);
}

//Volume of cylinder

#include <stdio.h>
#define PI 3.147

void main()
{
   float r,h,volume;
   printf("Enter the radius & height of the cylinder: \n");
   scanf("%f %f",&r,&h);
   volume=PI*r*r*h;
   printf("The volume of cylinder is %f",volume);
}
