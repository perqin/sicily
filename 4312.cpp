// 4312.cpp: http://soj.me/4312
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// changed from code 1201.cpp
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int T;
  cin >> T;
  for (int k = 0; k < T; k++) {
    string A, B;
    cin >> A >> B;

    string num1(A.begin(), A.end());
    string num2(B.begin(), B.end());
    int maxlen = num1.size() > num2.size() ? num1.size() : num2.size();

    string sum;
    num1.resize(maxlen + 1);
    num2.resize(maxlen + 1);
    sum.resize(maxlen + 1);
    for (int i = 0; i < maxlen; i++) {
      if (num1[i]) num1[i] -= '0';
      if (num2[i]) num2[i] -= '0';
      sum[i] += num1[i] + num2[i];
      sum[i + 1] += sum[i] / 10;
      sum[i] = sum[i] % 10;
      sum[i] += '0';
    }
    sum[maxlen] += '0';

    string ans(sum.rbegin(), sum.rend());
    int j;
    for (j = 0; j < maxlen + 1; j++) {
      if (ans[j] > '0') break;
    }
    ans.erase(0, j);

    if (j == maxlen + 1)
      cout << '0' << endl;
    else
      cout << ans << endl;
  }
  return 0;
}
