// 4187.cpp: http://soj.me/4187
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) {
      int temp = a;
      a = b;
      b = temp;
    }
    if (b > c) {
      int temp = b;
      b = c;
      c = temp;
    }
    if (a > c) {
      int temp = a;
      a = c;
      c = temp;
    }

    if (a + b > c)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
