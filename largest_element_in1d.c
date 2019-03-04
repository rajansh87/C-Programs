#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,max,ch;
printf("enter number of elements : ");
scanf("%d",&ch);
printf("\nenter elements : ");
for(i=0;i<ch;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<ch;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("\n;\largest element is %d",max);
getch();
}
