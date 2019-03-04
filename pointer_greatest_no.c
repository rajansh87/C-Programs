#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,*p,*q;
p=&x;
q=&y;
printf("\nenter two values : ");
scanf("%d%d",&x,&y);
if(*p>*q)
{
printf("\nx is maximum");
}
else
{
printf("\ny is maximum");
}
getch();
}
