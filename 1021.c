// Problem#: 1021
// Submission#: 2591554
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>
#include<string.h>

int main() {
  int i, j, n, a, b, c[200000 + 20], d[200000 + 20];
  while (scanf("%d", &n) && n) {
    memset(c, 0, sizeof(c));
    memset(d, 0, sizeof(d));
    for (i = 0; i < n; i++) {
      scanf("%d %d", &a, &b);
      c[a - 1] = 2 * i + 1;
      c[b - 1] = 2 * i + 2;
    }
    for (i = 0, j = 0, d[0] = c[0]; i < 2 * n; i++) {
      if (c[i + 1] != d[j] + 1) {
        d[j + 1] = c[i + 1];
        j++;
      } else {
        d[j] = 0;
        j--;
      }
    }
    printf(!d[0] ? "Yes\n" : "No\n");
  }
  return 0;
}
