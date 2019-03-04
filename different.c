#include<stdio.h>
#include<conio.h>
void main()
{
int x[5],i;
printf("enter elements : ");
for(i=0;i<5;i++)
{
scanf("%d",x+i);//means &x[i]=x+1;
}
for(i=0;i<5;i++)
{
printf("\n%d",*x+i);//means x+i=*x+i;
}
}
