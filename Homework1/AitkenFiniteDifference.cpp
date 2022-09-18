#include <cmath>
#include <iostream>
#include <vector>
#include "AitkenFiniteDifference.h"
using namespace std;

void AitkenMethod::SetXList(vector<double> x_in) { xList.assign(x_in.begin(), x_in.end()); }
void AitkenMethod::SetYList(vector<double> y_in) { yList.assign(y_in.begin(), y_in.end()); }
void AitkenMethod::GetDiffTable(void) {
  size_t size = xList.size();
  bool returnflag = false;
  for (size_t j = 1; j < size; j++) {
    P[0][j] = yList[0] * (x - xList[j]) / (xList[0] - xList[j]) + yList[j] * (x - xList[0]) / (xList[j] - xList[0]);
    //cout<< P[0][j] <<endl;
    if (j > 1 && P[0][j] < error) {
      this->result = P[0][j];
      return;
    }
  }
  for (size_t i = 1; i < size; i++) {
    for (size_t j = i + 1; j < size; j++) {
      P[i][j] = P[i - 1][i] + (x - xList[i]) / (xList[i] - xList[j]) * (P[i - 1][i] - P[i - 1][j]);
      //cout << P[i][j] << endl;
      if (j > i + 1 && abs(P[i][j] - P[i][j - 1]) < error) {
        this->result = P[i][j];
        returnflag = true;
        return;
      }
    }
  }
  if(returnflag == false) cout<<"The precision cannot be reached."<<endl;
}
double AitkenMethod::GetResult() {
  GetDiffTable();
  return result;
}
