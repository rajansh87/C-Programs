#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
struct ticket
{
char tno[10],jd[10],coc[5][5],pn[10][10],gen[5][5],brd[30],des[30],trn[10];
int fr[10],sn[10],ag[10];
};
struct ticket t1;
int ch,i,tfr=0;
system("cls");
printf("\nenter ticket number,date,train no.,bording,destination and coach : ");
scanf("%s%s%s%s%s%s",&t1.tno,&t1.jd,&t1.trn,&t1.brd,&t1.des,&t1.coc);
printf("\nenter total no. of passengers : ");
scanf("%d",&ch);
if(ch<=6)
{
for(i=0;i<ch;i++)
{
printf("\nenter passenger name,age,gender,seat no,fare: ");
scanf("%s%d%s%d%d",&t1.pn[i],&t1.ag[i],&t1.gen[i],&t1.sn[i],&t1.fr[i]);
tfr=tfr+t1.fr[i];
}
system("cls");
printf("\nticket no. : %s\t\t\t\tjourney date : %s\ttrain no. :%s\nboarding at : %s\t\t\t\tdestination : %s",t1.tno,t1.jd,t1.trn,t1.brd,t1.des);
printf("\nname\tage\tgender\tseat no.\tfare");
for(i=0;i<ch;i++)
{
printf("\n%s\t%d\t%s\t%d\t\t%d",t1.pn[i],t1.ag[i],t1.gen[i],t1.sn[i],t1.fr[i]);
}
printf("\ntotal fare =%d",tfr);
}
else
{
    system("cls");
printf("\n\n\n\n\n\n\t\t\t\t\t!!!****maximum 6 passenger applicable****!!!");
}
getch();
}
