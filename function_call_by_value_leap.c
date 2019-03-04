#include<stdio.h>
#include<conio.h>
int leap(int);
void main()
{
int n;
printf("\nenter number : ");
scanf("%d",&n);
leap(n);
getch();
}
int leap(int x)
{
if(x%4==0)
{
printf("\nleap year");
}
else
{
printf("\nnot a leap year");
}
}
