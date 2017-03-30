
#include <stdio.h>

double calc_f(double x) {

  return 1.2 * x * x - 3.5 * x + 0.3;
  
}



int main() {

  double z = 9.1;
  double w = calc_f(z);



  double x0 = 15.0;
  
  double y = calc_f(x0);

  double x1 = 3.0;
  double y1 = calc_f(x1);

  printf("%f %f\n", y, y1);

  
}
