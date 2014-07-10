// Problem#: 1209
// Submission#: 2593166
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>

int main() {
  int T, i, n, a, c, counter;
  scanf("%d", &T);
  while (T--) {
    scanf("%d %d", &i, &n);
    for (counter = 0, c = 1; c*c < 2 * n; c++) {
      if (2 * n % (c + 1) == 0
          && (2 * n / (c + 1) - c) % 2 == 0
          && (2 * n / (c + 1) - c))
          counter++;
    }
    printf("%d %d\n", i, counter);
  }
  return 0;
}
