#include <stdio.h>

int main (){
    printf("Enter a number :\n");
    int t;
    scanf("%d" , &t);
    printf("number:  square:  cube:\n");
    for(int i = 0 ; i <= t ; i++){
        printf("%-8d %-8d %-8d\n" , i , i*i , i*i*i );
    } 

}