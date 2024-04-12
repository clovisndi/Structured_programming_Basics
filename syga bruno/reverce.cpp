#include<stdio.h>
int main(){
	int a,b,n;
	printf("enter a digit /n");
	scanf("%d",&n);
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	
	printf("the reverse order is: %d%d%d",n,b,a);
	
	
	
	
	
	return 0;
}