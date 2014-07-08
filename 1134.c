// Problem#: 1134
// Submission#: 2651170
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>

int main() {
  int i, j1, j2, n;
  int s, a[10000 + 10] = { 0 }, b[10000 + 10] = { 0 };

  while (scanf("%d %d", &n, &s) && n) {
    for (i = 0; i < n; i++) scanf("%d %d", &a[i], &b[i]);

    for (j1 = 0; j1 < n; j1++) {
      for (j2 = j1; j2 < n; j2++) {
        if (b[j2] < b[j1]) {
          a[j2] ^= a[j1] ^= a[j2] ^= a[j1];
          b[j2] ^= b[j1] ^= b[j2] ^= b[j1];
        }
      }
    }

    for (i = 0; i < n; i++) {
      if (s >= b[i])
        s += a[i];
      else
        break;
    }

    printf(i == n ? "YES\n" : "NO\n");
  }

  return 0;
}
