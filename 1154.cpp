// 1154.cpp: http://soj.me/1154
// a version using STL
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::list;

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, num;
    list<int> numbers;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> num;
      numbers.push_back(num);
    }

    numbers.sort();

    list<int>::iterator it;
    for (it = numbers.begin(); it != numbers.end(); it++) cout << *it << endl;
  }
  return 0;
}
