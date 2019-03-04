#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,i,len;
printf("enter length of series : ");
scanf("%d",&len);
printf("\t%d\t%d",a,b);
for(i=1;i<len;i++)
{
c=a+b;
printf("\t%d",c);
a=b;
b=c;
}
getch();
}
