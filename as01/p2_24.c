#include <stdio.h>

int main(){
  int user = 0;

  printf("Enter a number: ");
  scanf("%d", &user);

  if(user % 2 == 1){
    printf("Odd\n");
  }else{
    printf("Even\n");
  }

  return 0;
}
