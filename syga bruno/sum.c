#include <stdio.h>

int main() {
  int num, sum=0, rem;
  printf("Enter a three-digit number: ");
  scanf("%d", &num);

  rem = num % 10;
  sum += rem;
  num /= 10;

  rem = num % 10;
  sum += rem;
  num=num/10;

  rem = num % 10;
  sum += rem;
  
  printf("Sum of digits: %d", sum);
  
  return 0;
}
