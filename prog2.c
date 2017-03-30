
#include <stdio.h>

double calc_f(double x) {

  return 1.2 * x * x - 3.5 * x + 0.3;
  
}



int main() {

  double y = calc_f(12.7);

  printf("%f\n", y);

  
}
