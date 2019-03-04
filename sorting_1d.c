#include<stdio.h>
#include<conio.h>
void main()
{
int j,ch,i,a[50],l,temp;
printf("\nenter no. of elements in array : ");
scanf("%d",&ch);
printf("\nenter elements : ");
for(i=0;i<ch;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<ch;i++)
{
for(j=i+1;j<ch;j++)
{
   if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
for(l=0;l<ch;l++)
{
printf("%d  ",a[l]);
}
printf("\n");
}
}
printf("\nthe sorted array is : ");
for(i=0;i<ch;i++)
{
printf("%d  ",a[i]);
}
getch();
}


