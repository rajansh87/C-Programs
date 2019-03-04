#include<stdio.h>
#include<conio.h>
void main()
{
float b,da,hr,ta,sa,gs,pf,ns;
printf("enter basic salary : ");
scanf("%f",&b);
if(b>=15000)
{
da=b*113/100;
hr=b*15/100;
ta=b*19/100;
sa=b*10/100;
}
else if((b>=9000)&&(b<15000))
{
da=b*113/100;
hr=b*13/100;
ta=b*15/100;
sa=b*10/100;
}
else if((b>=5000)&&(b<9000))
{
da=b*113/100;
hr=b*13/100;
ta=b*15/100;
sa=0;
}
else
{
da=b*113/100;
hr=b*10/100;
ta=0;
sa=0;
}
pf=b*12/100;
gs=b+da+hr+ta+sa;
ns=gs+pf;
printf("\nhouse rent = %.2f\nda = %.2f\ngross salary = %.2f\npf= %.2f\net salary = %.2f",hr,da,gs,pf,ns);
getch();
}
