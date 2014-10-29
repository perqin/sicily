// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 3718.cpp: http://soj.me/3718
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int fail = 0, n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int a, sum = 0;
    for (int j = 0; j < m; j++) {
      cin >> a;
      sum += a;
    }
    float average = (sum + 0.0) / m;
    cout << std::fixed << std::setprecision(2) << average << endl;

    if (average < 60) fail++;
  }
  cout << fail << endl;

  return 0;
}
