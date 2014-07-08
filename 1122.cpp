// Problem#: 1122
// Submission#: 2528517
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
  int k, m;
  while (cin >> k&&k) {
    cin >> m;
    string inside;
    set<string> s;
    for (int i = 0; i<k; i++) {
      cin >> inside;
      s.insert(inside);
    }
    bool b = true;
    for (int i = 0; i<m; i++) {
      int all, least, count = 0;
      cin >> all >> least;
      string temp;
      bool b2 = false;
      for (int j = 0; j<all; j++) {
        cin >> temp;
        if (s.count(temp) != 0)
          count++;
        if (count >= least)
          b2 = true;
      }
      if (b2 == false)
        b = false;
    }
    if (b) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}
