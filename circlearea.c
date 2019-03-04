#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,c,r,pi=3.14;
printf("enter radius of circle : ");
scanf("%f",&r);
a=pi*r*r;
c=2*pi*r;
printf("\narea of circle = %.2f\ncircumference of circle = %.2f",a,c);
getch();
}
