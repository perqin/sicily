// Problem#: 1097
// Submission#: 2528474
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using std::cin;
using std::cout;
using std::string;

class R
{
public:
  string name;
  int resis;
}arr[10001];

bool cmp(R x, R y) {
  return x.resis<y.resis;
}

int main() {
  int a, b, c, d;
  double target;
  while (cin >> a >> b >> c >> d) {
    if (a <= 0) {
      cout << "IMPOSSIBLE" << endl;
      continue;
    }
    for (int i = 0; i<d; i++)
      cin >> arr[i].name >> arr[i].resis;
    target = (a - b)*1000.0 / c;
    if (target <= 0) {
      cout << "---" << endl;
      continue;
    }
    sort(arr, arr + d, cmp);
    bool b = false;
    for (int i = 0; i<d; i++) {
      if (arr[i].resis >= target) {
        b = true;
        cout << fixed << setprecision(2) << target << " " << arr[i].name << endl;
        break;
      }
    }
    if (!b) cout << "IMPOSSIBLE" << endl;
  }
  return 0;
}

