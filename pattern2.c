#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,k,m=55;
printf("enter length of pyramid : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=1;k<=m;k++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
m--;
}
getch();
}
