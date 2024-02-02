#include<stdio.h>
#include<conio.h>
int main(){
	void add(int,int);
	int x,y;
	printf("Enter the number");
	scanf("%d%d",&x,&y);
	
	add(x,y);
}
void add(int a,int b){
	int c;
	c= a+b;
	printf("%d",c);
}
