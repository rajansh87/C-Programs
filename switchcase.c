#include<stdio.h>
#include<conio.h>
void main()
{
int ch,a,b,add=0,sub=0,mul;
float div;
printf("\n\n\n\t\t\t\t\t\t1.addition\n\n\n\t\t\t\t\t\t2.subtraction\n\n\n\t\t\t\t\t\t3.multiplication\n\n\n\t\t\t\t\t\t4.division\n");
printf("\nenter your choice : ");
scanf("%d",&ch);
switch(ch)
{
    case 1:
    printf("\n enter two numbers : ");
    scanf("%d%d",&a,&b);
    add=a+b;
    printf("\nanswer is %d",add);
    break;
    case 2:
    printf("\nenter two numbers : ");
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("\nanswer is %d",sub);
    break;
    case 3:
    printf("\nenter two numbers : ");
    scanf("%d%d",&a,&b);
    mul=a*b;
    printf("\nanswer is %d",mul);
    break;
    case 4:
    printf("\nenter two numbers : ");
    scanf("%d%d",&a,&b);
    div=a/b;
    printf("\nanswer is %.2f",div);
    break;
    default:
    printf("\n\n\n\n\n\n\t\t\t\t\t!.....inalid statement.....!");
    break;
}
getch();
}
