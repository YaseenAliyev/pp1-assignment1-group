#include <stdio.h>

int main(){
  double milesPerDay;
  double gasolinePrice;
  double milesPerGallon;
  double parkingFee;
  double tolls;

  double gallonsDaily;
  double costGasoline; // cost for gasoline daily
  double totalCost;

  printf("Enter the total number of miles you drive per day: ");
  scanf("%lf", &milesPerDay);

  printf("Enter the cost for Gasoline: ");
  scanf("%lf", &gasolinePrice);
  
  printf("Enter the miles per gallon: ");
  scanf("%lf", &milesPerGallon);

  printf("Enter the Parking fee per day: ");
  scanf("%lf", &parkingFee);

  printf("Enter the tolls per day: ");
  scanf("%lf", &tolls);
  
  gallonsDaily = milesPerDay/milesPerGallon;
  costGasoline = gallonsDaily * gasolinePrice;
  totalCost = costGasoline + parkingFee + tolls;

  printf("The Total Cost of Everything will be %.2lf$\n", totalCost);

  return 0;
}
