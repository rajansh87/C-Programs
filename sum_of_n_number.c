#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,sum=0,avg,x;
printf("enter no. of inputs : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter number : ");
scanf("%d",&x);
sum=sum+x;
}
avg=sum/n;
printf("\nsum = %d\naverage = %d",sum,avg);
getch();
}
