#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=0;
printf("enter number of values : ");
scanf("%d",&n);
while(i<=n)
{
printf("\t%d",i);
i=i+10;
}
getch();
}
