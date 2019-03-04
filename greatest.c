#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
printf("enter values of a,b,c : ");
scanf("%d%d%d",&a,&b,&c);
if((a==b)&&(a==c))
{
printf("all are equal");
}
else if((a>b)&&(a>c))
{
printf("first number is greatest");
}
else if((b>a)&&(b>c))
{
printf("second number is greatest");
}
else
{
printf("third number is greatest");
}
getch();
}
