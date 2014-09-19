// 3980.cpp: http://soj.me/3980
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int T;
  cin >> T;
  while (T--) {
    string binary;
    cin >> binary;

    string rbinary(binary.rbegin(), binary.rend());
    long int demical = 0;
    // for the binary isn't longer than 31 bit
    // also you can use long int to replace
    for (int i = 0; i < rbinary.size(); i++) {
      demical += (rbinary[i] - '0')*pow(2, i);
    }

    cout << demical << endl;
  }
}
