// Problem#: 1020
// Submission#: 2701517
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
#include<string>
using namespace std;

int mod(string divided, int divisor) {
  int p = 0, tmp = 0;
  tmp = divided[p++] - '0';
  while (true) {
    while (tmp < divisor) {
      if (p == divided.length()) return tmp;
      tmp = 10 * tmp + divided[p++] - '0';
    }
    tmp %= divisor;
  }
}

int main() {
  int T;

  cin >> T;
  while (T--) {
    int n, b[100 + 1];
    string x;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> b[i];
    cin >> x;

    cout << '(';
    for (int Head = 1, i = 0; i < n; Head = 0, i++) {
      if (!Head) cout << ',';
      cout << mod(x, b[i]);
    }
    cout << ')' << endl;

  }
  return 0;
}
