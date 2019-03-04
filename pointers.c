#include<stdio.h>
#include<conio.h>
void main()
{
long int x,*p;
p=&x;
printf("\nenter value of x : ");
scanf("%ld",&x);
printf("\nx = %ld",x);
printf("\np = %ld",p);
printf("\n&x = %ld",&x);
printf("\n*p = %ld",*p);
getch();
}
