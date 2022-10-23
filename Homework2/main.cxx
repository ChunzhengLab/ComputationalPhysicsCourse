#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

const double err = 0.00001;
const double upper_limit = 0.;
const double lower_limit = 1.;

double fuc(double x) { return exp(-x * x); }

template <typename FunctionType>
double DoIntegral(FunctionType fuc, double lowlim, double upplim, double err) {
  int n = 1;
  double I1, I2;
  double h = upplim - lowlim;
  I2 = h/2. * (fuc(lowlim) + fuc(upplim));
  do {
    I1 = I2;
    I2 = 0;
    h /= 2;
    n *= 2;
    double xk = lowlim;
    for (size_t i = 0; i < n; i++) {
      I2 += 0.5* h * (fuc(xk) + fuc(xk + h));
      xk += h;
    }
  } while (fabs(I2 - I1) > err);
  return I2;
}


int main() {
  double ans = DoIntegral(fuc,lower_limit,upper_limit,err);
  cout << "result is " << ans << endl;
}
