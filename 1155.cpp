// 1155.cpp: http://soj.me/1155
// using the Warshall Algotithm to get the transive package
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int n, m;

  while (cin >> n && n != 0) {
    cin >> m;

    // each time we need to reinitialize the matrix
    int a, b;
    bool way[200][200] = { false };
    for (int i = 0; i < m; i++) {
      cin >> a >> b;
      way[a][b] = true;
    }

    for (int temp = 0; temp < n; temp++) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (way[i][temp] && way[temp][j]) way[i][j] = true;
        }
      }
    }

    if (way[0][n - 1] == true) {
      cout << "I can post the letter" << endl;
    } else {
      cout << "I can't post the letter" << endl;
    }
  }

  return 0;
}
