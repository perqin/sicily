// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 1813.c: http://soj.me/1813
// change an M system to demical system to calculate and then change to M
// system to present
#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int toDigit(const char ch) {
  if (isdigit(ch)) {
    return ch - '0';
  } else if (isupper(ch)) {
    return ch - 'A' + 10;
  }
}

char toChar(const int a) {
  if (0 <= a && a <= 9) {
    return a + '0';
  } else if (a > 9) {
    return a - 10 + 'A';
  }
}

int toDemical(int M, string number) {
  string digit(number.rbegin(), number.rend());
  int length = digit.size();
  int demical = 0;
  for (int i = 0; i < length; i++) {
    demical += toDigit(digit[i])*pow(M, i);
  }
  return demical;
}

string toMstring(int M, int number) {
  string  temp;

  if (number == 0) return "0";  // especially consider when number is zero
  while (number) {
    temp += toChar(number % M);
    number /= M;
  }

  string Mstring(temp.rbegin(), temp.rend());
  return Mstring;
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    int M;
    cin >> M;
    string a, b;
    cin >> a >> b;
    int A = toDemical(M, a);
    int B = toDemical(M, b);
    int P = A / B;
    int Q = A % B;
    cout << toMstring(M, P) << endl;
    cout << toMstring(M, Q) << endl;
  }
  return 0;
}
