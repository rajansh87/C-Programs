#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,r=0,n;
printf("enter number : ");
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("sum = %d",sum);
getch();
}
