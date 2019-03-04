#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
printf("enter length of pyramid : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
getch();
}
