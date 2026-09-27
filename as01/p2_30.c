#include <stdio.h>
int main(){
  int user = 0;
  printf("Enter a number: ");
  scanf("%d", &user);
  
  for(int i = 10000; i > 0; i/=10){
    if(i == 10000){
     printf("%d ", user / i);
    }else{
     printf("%d ", user / i % 10);
    }
  }
  return 0;
}
