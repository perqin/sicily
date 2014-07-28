// 1818.cpp: http://soj.me/1818
// using the map to quickly store and search the data
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

void getGrade(int score) {
  if (0 <= score && score <= 100) {
    switch (score / 10) {
      case 10:
      case 9:
        cout << "A" << endl;
        break;
      case 8:
        cout << "B" << endl;
        break;
      case 7:
        cout << "C" << endl;
        break;
      case 6:
        cout << "D" << endl;
        break;
      default:
        cout << "E" << endl;
        break;
    }
  } else {
    cout << "Score is error!" << endl;
  }
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    int n, m;
    map<string, int> students;
    cin >> n >> m;

    string name;
    int score;
    for (int i = 0; i < n; i++) {
      cin >> name >> score;
      students[name] = score;
    }

    map<string, int>::iterator it;
    for (int i = 0; i < m; i++) {
      cin >> name;
      it = students.find(name);
      getGrade(it->second);
    }
  }
  return 0;
}
