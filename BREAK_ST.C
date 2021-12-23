#include<stdio.h>
#include<conio.h>
void main()
{
int i;
double number,sum = 0.0;
clrscr();
for(i = 1; i<=5;i++){
printf("Enter n%d:",i);
scanf("%lf",&number);
//if the user enters a negative number,break the loop
if(number<0.0){
break;
}
sum += number;//sum = sum + number
}
printf("sum = %.2lf",sum);
getch();
}
