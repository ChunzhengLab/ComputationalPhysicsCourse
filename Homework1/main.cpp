#include <iostream>
#include <vector>
#include "AitkenFiniteDifference.h"
using namespace std;
int main() {
  vector<double> xList;
  xList.push_back(0.3);
  xList.push_back(0.4);
  xList.push_back(0.5);
  xList.push_back(0.6);
  xList.push_back(0.7);
  vector<double> yList;
  yList.push_back(0.29850);
  yList.push_back(0.39646);
  yList.push_back(0.49311);
  yList.push_back(0.58813);
  yList.push_back(0.68122);
  double x = 0.462;
  double error = 0.00001;

  AitkenMethod aitkenMethod;
  aitkenMethod.SetX(x);
  aitkenMethod.SetMaxError(error);
  aitkenMethod.SetXList(xList);
  aitkenMethod.SetYList(yList);
  double result = aitkenMethod.GetResult();
  cout << "result is " << result << endl;
}