// 4700.cpp: http://soj.me/4700
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, cow_class, cow_product, product[3] = { 0 };
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> cow_class >> cow_product;
      if (product[cow_class - 1] < cow_product)
        product[cow_class - 1] = cow_product;
    }
    for (int i = 0; i < 3; i++) {
      if (product[i]) cout << i + 1 << " " << product[i] << endl;
    }
  }
  return 0;
}
