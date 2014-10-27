// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 1426.cpp: http://soj.me/1426
#include <iostream>
#include <string>
#include <algorithm>

#define MAX_SIZE 10000

using std::cin;
using std::cout;
using std::endl;
using std::sort;

using std::string;


int main() {
  int test_cases;
  for (cin >> test_cases; test_cases; test_cases--) {
    int num;
    string phones[MAX_SIZE + 1];

    cin >> num;
    for (int i = 0; i < num; i++) cin >> phones[i];
    sort(phones, phones + num);  // sort the phone numbers in alphabet order

    for (int i = 0; i < num; i++) {
      if (phones[i + 1].find(phones[i]) == 0) {
        cout << "NO" << endl;
        break;
      } else if (i == num - 1) {
        cout << "YES" << endl;
      }
    }
  }

  return 0;
}
