// 3836.cpp: http://soj.me/3836
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int m, n;
  while (true) {
    cin >> n >> m;
    if (m == 0 && n == 0) break;
    int up = 1, down = 1;
    for (int i = 0; i < m; i++) {
      up *= n - i;
      down *= m - i;
    }
    cout << up / down << endl;
  }
  return 0;
}
