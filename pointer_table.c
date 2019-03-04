#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z,**q,*p;
p=&y;
printf("\nenter number : ");
scanf("%d",&x);
//for(*p=1;*p<=10;y++)
//{
//z=x**p;
//printf("%d\n",z);
//}
//getch();
//}
p=&y;
q=&p;
for(**q=1;**q<=10;y++)
{
    z=x***q;
    printf("%d\n",z);
}
getch();
}
