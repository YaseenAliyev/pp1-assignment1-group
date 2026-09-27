#include <stdio.h>

int main(){
  int num1 = 0;
  int num2 = 0;
  int num3 = 0;
  int max = 0;
  int min = 0;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  // reused from 2.19
  if(num1 >= num2 && num1 >= num3){
    max = num1;
  }
  if(num2 >= num1 && num2 >= num3){
    max = num2;
  }
  if(num3 >= num1 && num3 >= num2){
    max = num3;
  }
  if(num1 <= num2 && num1 <= num3){
    min = num1;
  }
  if(num2 <= num1 && num2 <= num3){
    min = num2;
  }
  if(num3 <= num1 && num3 <= num2){
    min = num3;
  }

  printf("Max: %d\n", max);
  printf("Min: %d\n", min);
}
