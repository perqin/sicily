// Problem#: 1302
// Submission#: 2528508
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
using namespace std;

int main() {
  long long t;
  while (cin >> t&&t)
    cout << ((t == 1) ? 1 : (t - 1)*t / 2 - 1) << endl;
  return 0;
}
