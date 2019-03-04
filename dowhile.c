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
i++;
}
while(i<=n);
getch();
}
