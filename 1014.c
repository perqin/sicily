// Problem#: 1014
// Submission#: 2701498
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
using namespace std;

int main() {
  for (int n = 2992; n < 10000; n++) {
    int k, sum1 = 0, sum2 = 0, sum3 = 0;

    k = n;
    while (k) {
      sum1 += k % 10;
      k /= 10;
    }

    k = n;
    while (k) {
      sum2 += k % 12;
      k /= 12;
    }

    k = n;
    while (k) {
      sum3 += k % 16;
      k /= 16;
    }
    if (sum1 == sum2 && sum2 == sum3) cout << n << endl;

  }
  return 0;
}
