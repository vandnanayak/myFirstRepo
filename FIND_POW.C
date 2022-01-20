#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
int n,m,p;
clrscr();
printf("Enter the value of n and m");
scanf("%d%d",&n,&m);
p=pow(n,m);
printf("%d",p);
getch();
}