#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,*p;
p=&c;
printf("\nenter two numbers : ");
scanf("%d%d",&a,&b);
*p=a+b;
printf("\nsum = %d",c);
getch();
}
