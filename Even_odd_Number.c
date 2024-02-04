#include<stdio.h>
#include<conio.h>
void even_odd_number(int);
void main(){
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	
	even_odd_number(a);
}
void even_odd_number(int x){
		
		if(x%2==0){
			printf("Number is Even %d\n",x);
		}
		else{
			printf("Number is Odd",x);
		}
}
