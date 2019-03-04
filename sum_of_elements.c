#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,a[50],i,n;
printf("Enter number of elements : ");
scanf("%d",&n);
printf("\nenter elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("\nelements are : ");
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
printf("\nsum = %d",sum);
getch();
}
