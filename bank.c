#include<stdio.h>
#include<conio.h>
void main()
{
float cb,d,w,ab;//d=deposit,w=withdraw,cb=current bal.,ab=available bal.
char ch;
printf("enter current balance : ");
scanf("%f",&cb);
printf("\npress d for deposit or press w for withdrawal : ");
scanf("%s",&ch);
if((ch=='d')||(ch=='D'))
{
    printf("\nenter amount to deposit : ");
    scanf("%f",&d);
    ab=cb+d;
    printf("\navailable balance = %f",ab);
}
else if((ch=='w')||(ch=='W'))
{
    printf("\nenter amount to withdrawal : ");
    scanf("%f",&w);
    if(w>cb)
    {
        printf("\ninsufficient balance");
    }
    else
    {
        ab=cb-w;
        printf("\navailable balance = %f",ab);
    }
}


getch();
}
