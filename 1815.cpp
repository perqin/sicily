// 1815.cpp: http://soj.me/1815
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <iomanip>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int T;
  cin >> T;
  while (T--) {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << std::fixed << std::setprecision(2) << result << endl;
  }
  return 0;
}
