// Problem#: 1029
// Submission#: 2622042
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>
#include<string.h>
int main() {
  int i, m, d;
  long long all0[100 + 1], all1[100 + 1];
  while (scanf("%d %d", &m, &d) && m) {
    memset(all0, 0, sizeof(all0));
    memset(all1, 0, sizeof(all1));
    for (i = 1, all0[0] = 1; i <= d; i++) {
      if (i + 1 - m > 0) {
        all1[i] = all1[i - 1] + all1[i - m]
          + (all0[i - 1] + all0[i - m]) / 10000000000000000;
        all0[i] = (all0[i - 1] + all0[i - m]) % 10000000000000000;
      } else {
        all0[i] = all0[i - 1] + 1;
      }
    }
    if (all1[d]) printf("%lld%016lld\n", all1[d], all0[d]);
    else printf("%lld\n", all0[d]);
  }
}
