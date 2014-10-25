// 3497.cpp: http://soj.me/3497
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {
  for (int i = 100; i < 1000; i++) {
    int temp = i, sum = 0;
    while (temp) {
      sum += pow(temp % 10, 3);
      temp /= 10;
    }
    if (sum == i) cout << i << endl;
  }
  return 0;
}
