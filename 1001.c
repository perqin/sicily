// Problem#: 1001
// Submission#: 2615075
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>
#include<string.h>

void getdigit(int* digit, char* str) {
  int i;
  for (i = 0; str[i]; i++) digit[i] = str[i] - '0';
}

long long CC(int *digit, int END) {
  int i;
  long long a[10000 + 1] = { 0 };
  for (i = 2, a[0] = a[1] = 1; i <= END; i++) {
    if (digit[i - 1]) {

      if (digit[i - 1] + 10 * digit[i - 2] > 26) {
        a[i] = a[i - 1];
      } else {

        if (digit[i - 2]) {
          a[i] = a[i - 1] + a[i - 2];
        } else {
          a[i] = a[i - 1];
        }

      }

    } else {
      a[i] = a[i - 2];
    }
  }
  return a[END];
}

int main() {
  char str[10000 + 10];
  int digit[10000 + 10];
  long long result;
  while (scanf("%s", str) && str[0] != '0') {
    getdigit(digit, str);
    result = CC(digit, strlen(str));
    printf("%lld\n", result);
  }
  return 0;
}
