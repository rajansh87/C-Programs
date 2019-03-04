#include<stdio.h>
#include<conio.h>
void main()
{
int t=0,i,n;
printf("enter number : ");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
    t=n*i;
    printf("\t%d",t);
}
getch();
}
