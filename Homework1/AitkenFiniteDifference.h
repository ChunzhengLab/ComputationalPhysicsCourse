#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

class AitkenMethod {
 public:
  void SetX(double x_in) { this->x = x_in; }
  void SetMaxError(double error_in) { this->error = error_in; }
  void SetXList(vector<double> xList_in);
  void SetYList(vector<double> yList_in);
  double GetResult();
 private:
  vector<double> xList;
  vector<double> yList;
  double x;
  double error;
  bool IsErrorSatisfied(void);
  void GetDiffTable(void);
  double P[50][50];
  double result;
};
