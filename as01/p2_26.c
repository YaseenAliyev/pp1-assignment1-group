#include <stdio.h>
#include <math.h>

int main () {
    printf("Enter two numbers:\n");
    int a , b ;
    scanf("%d %d" , &a , &b );
    
    if ( b == 0 ){
        printf("%d isn't a multiple of %d\n" , a , b );
    }
    else if( a % b == 0){
        printf("%d is a multiple of %d\n" , a , b );
    }
    else{
        printf("%d isn't a multiple of %d\n" , a , b );
    }




}