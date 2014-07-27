// 1129.cpp: http://soj.me/1129
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string ISBN;
  int ISBN_digit[10] = { 0 };
  while (cin >> ISBN) {
    string::iterator it;
    int len = 0;
    for (it = ISBN.begin(); it != ISBN.end(); it++) {
      if (isdigit(*it)) {
        ISBN_digit[len] = *it - '0';
        len++;
      }
    }

    int sum = 0, temp = 0, check = 0;
    for (int i = 0; i < len; i++) {
      sum += ISBN_digit[i] * (10 - i);
    }
    if (sum % 11) {
      temp = (sum / 11 + 1) * 11;
    } else {
      temp = sum;
    }
    check = temp - sum;
    if (check == 10) {
      ISBN += "-X";
    } else {
      char c_check = check + '0';
      ISBN = ISBN + '-' + c_check;
    }
    cout << ISBN << endl;
  }
  return 0;
}
