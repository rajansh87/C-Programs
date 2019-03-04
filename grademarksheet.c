#include<stdio.h>
#include<conio.h>
void main()
{
float m1,m2,m3,m4,m5,t,p;
printf("enter all five marks : ");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
t=m1+m2+m3+m4+m5;
p=t/5;
printf("\ntotal marks =%.2f\npercentage =%.2f",t,p);
if(p>=60)
{
printf("\npass first");
}
else if((p>=45)&&(p<60))
{
printf("\npass second");
}
else if((p>=35)&(p<45))
{
printf("\npass third");
}
else
{
printf("\nfail");
}
getch();
}
