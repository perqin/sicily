// 3725.cpp: http://soj.me/3725
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int n;
  while (cin >> n && n) {
    int max = 0, a;
    for (int i = 0; i < n; i++) {
      cin >> a;
      if (a > max) max = a;
    }
    cout << max << endl;
  }

  return 0;
}
