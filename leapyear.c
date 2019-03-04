#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n;
printf("enter the year : ");
scanf("%d",&n);
if(n%4==0)
{
printf("\n %d is a leap year",n);
}
else
{
    printf("\n %d is not a leap year",n);
}
getch();
}
