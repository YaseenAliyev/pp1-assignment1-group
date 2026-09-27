#include <stdio.h>
#include <math.h>

int main(){
  double a = 0;
  double t = 0;
  double u = 0;
  
  printf("Enter the initial velocity of the object: ");
  scanf("%lf", &u);

  printf("Enter the acceleration of the object: ");
  scanf("%lf", &a);

  printf("Enter the time that has elapsed: ");
  scanf("%lf", &t);
  
  double v = u + a * t;
  double s = u * t + 0.5 * a * pow(t, 2);

  printf("The Final velocity is %.2lf\n", v);
  printf("The Distance is %.2lf\n", s);
}
