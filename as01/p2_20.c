#include <stdio.h>

int main(void){
    int totalTime;
    printf("What's the elapsed time?\n");
    scanf("%d",&totalTime);

    int hours= totalTime / 3600;
    int minutes = (totalTime % 3600)/60;
    int seconds = totalTime % 60;
    printf("%.2d:%.2d:%.2d\n",hours,minutes,seconds);
}
