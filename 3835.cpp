// 3835.cpp: http://soj.me/3835
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
    double x1, y1, x2, y2, x3, y3;
    double a, b, c;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    a = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    b = sqrt((x1 - x3)*(x1 - x3) + (y1 - y3)*(y1 - y3));
    c = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));

    cout << std::fixed << std::setprecision(5) << a + b + c << endl;
  }

  return 0;
}
