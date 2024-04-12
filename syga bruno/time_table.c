#include<stdio.h>
int main() {
int n;
 printf("Enter a number:");
 scanf("%d",&n);
 printf("Time Table of %d:\n", n);
 for(int i = 1; i <=12; i++) {
  printf("%d x %d = %d\n",i,n,i*n);
}
return 0;
}
