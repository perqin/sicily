// 4189.cpp: http://soj.me/4189
// when n >= 24, the result is always 940313
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int n;
  while (cin >> n && n) {
    std::map<int, bool> data;

    int num;
    for (int i = 0; i < n; i++) {
      cin >> num;
      data[num] = true;
    }

    cout << data.size() << endl;
  }
  return 0;
}
