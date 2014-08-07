// 1395.cpp: http://soj.me/1395
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int N;
  cin >> N;
  while (N--) {
    string n;
    cin >> n;
    string::iterator it;
    for (it = n.end() - 1; it != n.begin(); it--) {
      if (*it >= '5') (*(it - 1))++;
      *it = '0';
    }
    if (*n.begin() == ':') {
      *n.begin() = '1';
      n += '0';
    }
    cout << n << endl;
  }
  return 0;
}
