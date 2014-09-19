// 4086.cpp: http://soj.me/4086
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
    int i;
    for (i = 10; i <= 100; i++) {
      if (i % 3 == a && i % 5 == b && i % 7 == c) {
        cout << i << endl;
        break;
      }
    }
    if (i == 101) cout << "No answer" << endl;
  }
  return 0;
}
