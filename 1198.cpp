// 1198.cpp: http://soj.me/1198
// compare sub[i][j] and sub[j][i] to get the lexicographically smallest string
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void subStringsSort(int N, string sub[8]) {
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      if (sub[i] + sub[j] > sub[j] + sub[i]) {
        string temp = sub[i];
        sub[i] = sub[j];
        sub[j] = temp;
      }
    }
  }
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    int N;
    string sub[8];
    cin >> N;
    for (int i = 0; i < N; i++) cin >> sub[i];
    subStringsSort(N, sub);
    for (int i = 0; i < N; i++) cout << sub[i];
    cout << endl;
  }
  return 0;
}
