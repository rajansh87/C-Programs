#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
struct bill
{
int bn;
char dt[10],in[10][10],pn[30];
long int q[10],p[10],ptot[10];
};
struct bill b1;
system("cls");
int ch,i,tot=0;
printf("\nenter bill no.,date,party name: ");
scanf("%d%s%s",&b1.bn,&b1.dt,&b1.pn);
printf("\nenter total no. of items : ");
scanf("%d",&ch);
for(i=0;i<ch;i++)
{
printf("\nenter item,qty,price :");
scanf("%s%ld%ld",&b1.in[i],&b1.q[i],&b1.p[i]);
b1.ptot[i]=b1.p[i]*b1.q[i];
tot=tot+b1.ptot[i];
}
system("cls");
printf("\nbill no. :%d\t\t\t\tdate:%s\n\nparty name :%s",b1.bn,b1.dt,b1.pn);
printf("\n\n\nparticular\tqty\tprice\ttotal");
for(i=0;i<ch;i++)
{
printf("\n%s\t\t%ld\t%ld\t%ld",b1.in[i],b1.q[i],b1.p[i],b1.ptot[i]);//
}
printf("\n\n\n\t\tgrand total =%d",tot);
getch();
}
