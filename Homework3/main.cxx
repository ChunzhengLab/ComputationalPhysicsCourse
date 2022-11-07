#include <iomanip>
#include <iostream>
using namespace std;

double fun(double x, double y) { return (4.0 * x / y - x * y); }
template <typename FunctionType>
void EulerMethod(FunctionType fuc, double x0, double y0, double xmax, int n) {
  double h = (xmax - x0) / n;
  double x[n];
  double y[n];
  x[0] = x0;
  y[0] = y0;
  cout << "|i|x|y|" << endl;
  cout << "|-|-|-|" << endl;
  cout << "|"
       << "0|" << x[0] << "|" << y[0] << "|" << endl;
  for (size_t i = 1; i < n + 1; i++) {
    x[i] = x[i - 1] + h;
    y[i] = y[i - 1] + h * fuc(x[i - 1], y[i - 1]);
    cout << "|" << i << "|" << x[i] << "|" << y[i] << "|" << endl;
  }
}
template <typename FunctionType>
void BackwardEulerMethod(FunctionType fuc, double x0, double y0, double xmax, int n) {
  double h = (xmax - x0) / n;
  double x[n];
  double yp[n];
  double yc[n];
  double y[n];
  x[0] = x0;
  yp[0] = y0;
  yc[0] = y0;
  y[0] = y0;
  cout << "|i|x|y|" << endl;
  cout << "|-|-|-|" << endl;
  cout << "|"
       << "0|" << x[0] << "|" << y[0] << "|" << endl;
  for (size_t i = 1; i < n + 1; i++) {
    x[i] = x[i - 1] + h;
    yp[i] = y[i - 1] + h * fuc(x[i - 1], y[i - 1]);
    yc[i] = y[i - 1] + h * fuc(x[i], y[i - 1]);
    y[i] = 0.5 * (yp[i] + yc[i]);
    cout << "|" << i << "|" << x[i] << "|" << y[i] << "|" << endl;
  }
}

int main() {
  cout << "===========EulerMethod===========" << endl;
  EulerMethod(fun, 0., 3., 1., 8);
  cout << "=======BackwardEulerMethod=======" << endl;
  BackwardEulerMethod(fun, 0., 3., 1., 8);
  return 0;
}
