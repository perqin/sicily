// 3913.cpp: http://soj.me/3913
// when n >= 24, the result is always 940313
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int n, sum = 0;
  cin >> n;
  if (n >= 24) {
    cout << 940313 << endl;
    return 0;
  }
  for (int i = 1; i <= n; i++) {
    int temp = 1;
    for (int j = 0; j < i; j++) {
      temp *= i - j;
      temp %= 1000000;
    }
    sum += temp;
    sum %= 1000000;
  }
  cout << sum << endl;
  return 0;
}
