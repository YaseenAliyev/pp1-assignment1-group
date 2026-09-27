#include <stdio.h>

int main(){
  int num1 = 0;
  int num2 = 0;

  puts("Please enter Two Numbers");
  printf("Number 1: ");
  scanf("%d", &num1);
  printf("Number 2: ");
  scanf("%d", &num2);

  printf("The Sum of the Numbers is: %d\n", num1 + num2);
  printf("The Difference of the Numbers is: %d\n", num1 - num2);
  printf("The Product of the Numbers is: %d\n", num1 * num2);
  printf("The quotient of the Numbers is: %d\n", num1 / num2);
  printf("The remainder of the Numbers is: %d\n", num1 % num2);
  return 0;
}
