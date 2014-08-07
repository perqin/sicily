// 1087.cpp: http://soj.me/1087
// NOTICE THAT THE COINS ARE IN A CIRCLE!
// the strategy is that if n is an even number, the latter competitor can get
// the same numbers of coins as the former did, then the latter win.
// if n is an odd number then the latter competitor can get the coins that can
// match 3 coins with the former, then the latter win.
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int n;
  while (cin >> n && n) {
    if (n >= 3)
      cout << "Bob" << endl;
    else
      cout << "Alice" << endl;
  }
  return 0;
}
