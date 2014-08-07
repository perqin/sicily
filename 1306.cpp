// 1306.cpp: http://soj.me/1306
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int n, m;
  int data[100000 + 10];
  while (cin >> n >> m && (n || m) != 0) {
    for (int i = 0; i < n; i++) cin >> data[i];
    std::sort(data, data + n);
    for (int i = 0; i < n; i += m) {
      if (i) cout << " ";
      cout << data[i];
    }
    cout << endl;
  }
  return 0;
}
