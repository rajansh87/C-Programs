#include<stdio.h>
#include<conio.h>
void main()
{
int i,f=1,n;
printf("enter number : ");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
f=f*i;
}
printf("\nfactorial = %d",f);
getch();
}
