// Problem#: 1007
// Submission#: 2619484
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>
#include<string.h>

int main() {
  int i, j, k, n;
  char str[200 + 2] = { '\0' }, out[200 + 2][200 + 2] = { '\0' };

  while (scanf("%d", &n) && n) {
    scanf("%s", str);

    i = j = k = 0;
    while (str[k]) {

      if (j % 2) out[n - i - 1][j] = str[k];
      else out[i][j] = str[k];

      if (i == n - 1) {
        i = 0;
        j++;
      } else {
        i++;
      }
      k++;
    }

    for (i = 0; i < n; i++) {
      printf("%s", out[i]);
    }
    printf("\n");

    memset(str, '\0', sizeof(str));
    for (i = 0; i < n; i++) memset(out[i], '\0', sizeof(out[i]));
  }

  return 0;
}
