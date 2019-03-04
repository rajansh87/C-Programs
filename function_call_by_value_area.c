#include<stdio.h>
#include<conio.h>
float ar(int);
void main()
{
int a;
float b;
printf("\nenter radius of circle : ");
scanf("%d",&a);
b=ar(a);
printf("\narea of circle = %.2f",b);
getch();
}
float ar(int x)
{
float y,pi=3.14;
y=pi*x*x;
return y;
}
