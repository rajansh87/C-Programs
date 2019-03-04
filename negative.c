#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("enter number : ");
scanf("%d",&n);
if(n<0)
{
printf("\nnegative number");
}
else if(n>0)
{
printf("\npositive number");
}
else
{
printf("\nnumber is zero");
}
getch();
}
