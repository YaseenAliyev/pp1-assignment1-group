#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main () {
    printf("Enter the variables:\n");
    int u , a , t , maxi , mini;
    scanf("%d %d %d" , &u , &a , &t );

    if ( u >= a && u >= t){
        maxi = u;
    }
    else if ( a >= u && a >= t){
        maxi = a;
    }
    else{
        maxi = t;
    }

    if ( u >= a && t >= a){
        mini = a;
    }
    else if ( a >= u && t >= u){
        mini = u;
    }
    else{
        mini = t;
    }

    int orta =( a + u + t ) / 3 ;


    printf("Sum is  %d\n", a + u + t );
    printf("Average is %d\n", orta );
    printf("Product is %d\n", a * u * t );
    printf("Smallest is %d\n", mini );
    printf("Largest is %d\n", maxi );

}