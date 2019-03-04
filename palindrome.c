#include<stdio.h>
#include<conio.h>
void main()
{
int n,t,r=0;
printf("enter number : ");
scanf("%d",&n);
t=n;
while(t!=0)
{
r=r*10;
r=r+t%10;
t=t/10;
}
if(n==r)
{
printf("\npalindrome");
}
else
{
printf("\nnot a plaindrome");
}
getch();
}
