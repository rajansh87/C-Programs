#include<stdio.h>
#include<conio.h>
void main()
{
float p,r,t,si,tot,tm,ins;
printf("\nenter amount :  ");
scanf("%f",&p);
printf("\nenter rate :  ");
scanf("%f",&r);
printf("\nenter time :  ");
scanf("%f",&t);
si=p*r*t/100;
tot=p+si;
tm=t*12;
ins=tot/tm;
printf("\ninterest=%f\n\ntotal=%f\n\ninstallment=%f",si,tot,ins);
getch();
}

