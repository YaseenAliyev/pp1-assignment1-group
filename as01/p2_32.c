#include <stdio.h>

int main() {
    printf("Do you prefer American or European Standarts ( A / E ) :");
    char c ;
    float w , h , BMI ;
    int t = 1;
    scanf( "%c" , &c );

    if ( c == 'A' ){
        printf("Enter Weight in Pounds : \n");
        scanf( "%f" , &w );
        printf("Enter Height in Inches : \n");
        scanf( "%f" , &h );
        BMI = ( w * 703 ) / ( h * h );
    }
    else if ( c == 'E' ){
        printf("Enter Weight in Kilograms : \n");
        scanf( "%f" , &w );
        printf("Enter Height in Meters : \n");
        scanf( "%f" , &h );
        BMI = ( w ) / ( h * h );
    }
    else{
        printf("You must enter A or E !!!\n");
        t = 0;
    }

    if ( t == 0 ){
        printf("BMI value couldn't be calculated!");
    }
    else if (BMI < 18.5){
        printf("Your BMI value is %.2f and you are %s\n" , BMI , "Underweight");
    }
    else if (BMI < 24.9){
        printf("Your BMI value is %.2f and you are %s\n" , BMI , "Normal weight");
    }
    else if (BMI < 29.9){
        printf("Your BMI value is %.2f and you are %s\n" , BMI , "Overweight");
    }
    else{
        printf("Your BMI value is %.2f and you are %s\n" , BMI , "Obese");
    }


}