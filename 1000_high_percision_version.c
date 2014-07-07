// Problem#: 1000
// Submission#: 2689799
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>
#include<string.h>

char* strrev(char* str) {
  char *h = str, *t = str, ch;
  while (*t++) {}
  t -= 2;
  while (h < t) {
    ch = *h;
    *h++ = *t;
    *t-- = ch;
  }
}

void substruct(char *big, char *small, char* result) {
  for (int i = 0; big[i] || small[i]; i++) {
    if (big[i] < small[i]) {
      big[i] += 10;
      big[i + 1]--;
    }
    if (!small[i]) small[i] += '0';
    result[i] = (big[i] - '0') - (small[i] - '0') + '0';
  }
}

void Printf(char *c) {
  int i = 0;
  while (c[i++] == '0') {}
  if (!c[i]) printf("0");
  printf("%s", c + i - 1);
  printf("\n");
}

int main() {
  char a[100 + 1] = { 0 }, b[100 + 1] = { 0 }, c[100 + 1] = { 0 };
  scanf("%s", a);
  scanf("%s", b);
  strrev(a);
  strrev(b);
  if (strlen(a) < strlen(b)) {
    substruct(b, a, c);
    printf("-");
  } else if (strlen(a) > strlen(b)) {
    substruct(a, b, c);
  } else {
    for (int i = strlen(a) - 1; i >= 0; i--) {
      if (a[i] == b[i]) {
        if (i) {
          continue;
        } else {
          c[i] += '0';
        }
      } else if (a[i] > b[i]) {
        substruct(a, b, c);
        break;
      } else if (a[i] < b[i]) {
        substruct(b, a, c);
        printf("-");
        break;
      }
    }
  }
  strrev(c);
  Printf(c);
  return 0;
}
