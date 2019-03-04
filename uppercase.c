#include<stdio.h>
#include<conio.h>
void main()
{
char x;
printf("enter character : ");
scanf("%c",&x);
if((x>=65)&&(x<=91))
{
printf("\nupper case letter");
}
else if((x>=97)&&(x<=122))
{
printf("\nlower case letter");
}
else if((x<65)||(x<97)&&(x<97)||(x>122))
{
printf("\nspecial character");
}
getch();
}
