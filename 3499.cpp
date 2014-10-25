// 3499.cpp: http://soj.me/3499
// when n >= 24, the result is always 940313
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int score, m, max = 0, min = 100, sum = 0;
    cin >> m;
    for (int i = 0; i < m; i++) {
      cin >> score;
      if (score > max) max = score;
      if (score < min) min = score;
      sum += score;
    }
    float average = (sum - max - min + 0.0) / (m - 2 + 0.0);
    cout << std::fixed << std::setprecision(2) << average << endl;
  }
  return 0;
}
