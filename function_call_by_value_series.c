#include<stdio.h>
#include<conio.h>
int ser(int,int);
void main()
{
int len,c,n;
printf("\nenter length of series : ");
scanf("%d",&len);
printf("\nenter no.for which series should be divisible : ");
scanf("%d",&n);
c=ser(len,n);
getch();
}
int ser(int x,int y)
{
int a=x*y;
int i;
for(i=1;i<=a;i++)
{
if(i%y==0)
{
printf("%d ",i);
}
}
return i;
}
