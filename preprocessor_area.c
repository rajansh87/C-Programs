#include<stdio.h>
#include<conio.h>
#define pi 3.14
void main()
{
float r,h,a;
printf("\nenter radius and height of cylinder : ");
scanf("%f%f",&r,&h);
a=pi*r*r*h;
printf("\narea = %f",a);
getch();
}
