#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1;
printf("enter number : ");
scanf("%d",&n);
do
{
printf("\t%d",i);
i=i+2;
}
while(i<=n);
getch();
}
