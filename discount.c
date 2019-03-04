#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float p,dr,da,fp;
printf("enter amount and discount rate : ");
scanf("%f%f",&p,&dr);
da=p*dr/100;
fp=p-da;
printf("\ndiscount = %.2f\nfinal price = %.2f",da,fp);
getch();
}
