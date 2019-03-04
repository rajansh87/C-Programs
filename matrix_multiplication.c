#include<stdio.h>
#include<conio.h>
void main()
{
int a[50][50],b[50][50],c[50][50],k,i,j,r1,r2,c1,c2;
printf("\nenter value of row and column of matrix 1 : ");
scanf("%d%d",&r1,&c1);
printf("\nenter value of row and column of matrix 2 : ");
scanf("%d%d",&r2,&c2);
printf("\nenter elements in matrix 1 : ");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nenter elements in matrix 2 : ");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\nmatrix 1 : \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d",a[i][j]);
printf("\t");
}
printf("\n");
}
printf("\nmatrix 2 : \n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d",b[i][j]);
printf("\t");
}
printf("\n");
}

printf("\nmultiplication of matrix : \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
    c[i][j]=0;
    for(k=0;k<c1;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}}}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d",c[i][j]);
printf("\t");
}
printf("\n");
}
getch();
}
