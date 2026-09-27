#include <stdio.h>

int main(void){
    
    int highestEverRainfall,currentRainfall ;
    printf("What was the highest rainfall ever in one season in your country?\n");
    scanf("%d",&highestEverRainfall);
    printf("What is current rainfall in your country this year \n");
    scanf("%d",&currentRainfall);

    if(currentRainfall > highestEverRainfall){
        printf("The current rainfall is the highest rainfall ever\n");
        highestEverRainfall = currentRainfall;
    }
    printf("Current rainfall: %d\n",currentRainfall);
    printf("The highest rainfall: %d\n",highestEverRainfall);

    

}
