#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter the number");
scanf("%d",&num);
if (num%2==0)
printf("Number if Even %d",num);

else
printf("Number is Odd %d",num);
getch();
}