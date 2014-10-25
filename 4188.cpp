// 4188.cpp: http://soj.me/4188
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <string>

#define maxlen 32
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int num;
    string binary;
    binary.resize(maxlen);

    cin >> num;
    for (int i = 0; num; i++) {
      binary[i] += num % 2 + '0';
      num /= 2;
    }

    string output(binary.rbegin(), binary.rend());

    int j;
    for (j = 0; j < maxlen; j++) if (output[j] == '1') break;
    output.erase(0, j);
    if (output.size() == 0)
      cout << 0 << endl;
    else
      cout << output << endl;
  }
  return 0;
}
