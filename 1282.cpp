// Problem#: 1282
// Submission#: 2701210
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  long n, m;
  int code[60001], next[60001], gate;
  long i, j, k;

  while (cin >> n) {
    for (i = 1; i <= n; i++)
      scanf("%d", &code[i]);

    next[1] = 0;
    j = 0;
    for (i = 2; i <= n; i++) {
      j = code[j + 1] == code[i] ? j + 1 : 0;
      next[i] = j;
    }

    scanf("%ld", &m);
    j = 0;
    for (i = 1; i <= m; i++) {
      scanf("%d", &gate);
      if (j != n) {
        j = code[j + 1] == gate ? j + 1 : next[j];
        if (j == n)
          k = i - j;
      }
    }
    j == n ? cout << k << endl : cout << "no solution\n";

  }

  return 0;

}
