// Problem#: 1286
// Submission#: 2528494
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
using namespace std;

int main() {
  int n, d, arr[107][507];
  bool b[107];
  while (cin >> n >> d, n || d) {
    for (int i = 0; i<n; i++) {
      bool b2 = true;
      for (int j = 0; j<d; j++) {
        cin >> arr[i][j];
        if (b2&&arr[i][j] == 0) {
          b[i] = false;
          b2 = false;
        }
      }
      if (b2) b[i] = true;
    }
    bool b3 = 0;
    for (int i = 0; i<n; i++) {
      if (b[i] == true) {
        b3 = 1;
        cout << "yes" << endl;
        break;
      }
    }
    if (!b3) cout << "no" << endl;
  }
  return 0;
}
