#include<stdio.h>
#include<conio.h>
int sum(int,int);
void main()
{
int a,b,c;
printf("\nenter two numbers : ");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("\nsum = %d",c);
getch();
}
int sum(int x,int y)
{
int z=x+y;
return z;
}
