
#include <stdio.h>

double calc_f(double x) {

  return 1.2 * x * x - 3.5 * x + 0.3;
  
}



int main() {

  double x0 = 12.7;
  
  double y = calc_f(x0);

  printf("%f\n", y);

  
}
