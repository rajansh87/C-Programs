#include<stdio.h>
#include<conio.h>
int big(int,int);
void main()
{
int a,b,c;
printf("\nenter two values : ");
scanf("%d%d",&a,&b);
c=big(a,b);
printf("\nbig number is %d",c);
getch();
}
int big(int x,int y)
{
if(x>y)
{
return x;
}
else
{
return y;
}
}
