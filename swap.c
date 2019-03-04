#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c=0;
printf("enter values of a,b : ");
scanf("%d%d",&a,&b);
printf("before swap : \na %d\nb = %d");
c=a;
a=b;
b=c;
printf("\nafter swaping : \na = %d\nb = %d");
getch();
}
