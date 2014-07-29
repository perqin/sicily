// 1293.cpp: http://soj.me/1293
// TLE first time. Use an int data to reduce the time.
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int chainLength(int n) {
  int length = 1;
  while (n != 1) {
    if (n % 2) {
      n = 3 * n + 1;
    } else {
      n /= 2;
    }
    length++;
  }
  return length;
}


int main() {
  int i, j;
  int max = 0;
  cin >> i >> j;
  for (int n = i; n <= j; n++) {
    int temp = chainLength(n);
    if (max < temp) max = temp;
  }

  cout << max << endl;
  return 0;
}
