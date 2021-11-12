#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int age;
char course[20];
char city [10] ;
clrscr();
printf("please e+nter your name");
gets(str);
printf("please enter your age");
scanf("%d",&age);
printf("enter your course");
scanf("%s",course);
printf("please enter your city");
scanf("%s" , city);
printf("my name is %s, \n my age is %d \n my course is %s \n my city is %s",str,age,course,city );

getch();
}


