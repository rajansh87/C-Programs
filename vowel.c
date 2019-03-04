#include<stdio.h>
#include<conio.h>
void main()
{
char x;
printf("enter character : ");
scanf("%c",&x);
if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))
{
printf("\nvowel");
}
else
{
printf("\nconsonants");
}
getch();
}
