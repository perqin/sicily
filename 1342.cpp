// 1342.cpp: http://soj.me/1342
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int maxValue(int n, int N, int v[], int p[]) {
  int value[50000] = { 0 };
  for (int i = 0; i < n; i++) {
    for (int j = N; j >= v[i]; j--) {
      value[j] = value[j] > value[j - v[i]] + p[i] ?
        value[j] : value[j - v[i]] + p[i];
    }
  }
  return value[N];
}

int main() {
  int N, m;
  while (cin >> N >> m) {
    int v[50000], w[50000], p[50000];
    for (int i = 0; i < m; i++) {
      cin >> v[i] >> w[i];
      p[i] = v[i] * w[i];
    }
    cout << maxValue(m, N, v, p) << endl;
  }
}
