#include<stdio.h>
#include<conio.h>
void main()
{
char x[50];
int i=0,y;
printf("\nenter string : ");
scanf("%s",&x[i]);
while(x[i]!='\0')
{
if((x[i]>=97&&x[i]<=122))
{
y=x[i];
y=y-32;
x[i]=y;
printf("%c",x[i]);
}
else if((x[i]>=65)&&(x[i]<=91))
{
y=x[i];
y=y+32;
x[i]=y;
printf("%c",x[i]);
}
i++;
}
getch();
}
