#include<stdio.h>
int add(int a, int b){
	return (a+b);
}
int sub(int a, int b){
	return (a-b);
}
int main(){
	int a,b;
	printf("enter first number\n");
	scanf("%d",&a);
	printf("enter second number\n");
	scanf("%d",&b);
	printf("before swapping\n");
	a=add(a,b);
	b=sub(a,b);
	a=sub(a,b);
	printf("After swapping first_number=%d, second_number=%d\n",a,b);
	
	
	
	
	return 0;
}