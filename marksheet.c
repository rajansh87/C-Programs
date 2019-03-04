#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float m1,m2,m3,m4,m5,tot,p;
printf("enter marks of five subjects : ");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
tot=m1+m2+m3+m4+m5;
p=tot/5;
printf("total marks = %f\npercentage = %f",tot,p);
getch();
}
