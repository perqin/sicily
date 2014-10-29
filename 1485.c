// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 1485.c: http://soj.me/1485
#include<stdio.h>
#include<string.h>

char* strrev(char* s) {
  char* h = s;
  char* t = s;
  char ch;

  while (*t++) {}
  t -= 2;

  while (h < t) {
    ch = *h;
    *h++ = *t;
    *t-- = ch;
  }

  return(s);
}

int main() {
  int i, j, n, HEAD = 1, lenth;
  char p[500 + 10];
  while (scanf("%d", &n) != EOF) {
    if (!HEAD) printf("\n");
    memset(p, '\0', sizeof(p));
    lenth = 1;
    for (i = 0, p[0] = 1; i < n + 1; i++) {
      for (j = 0; j < lenth; j++) p[j] *= 2;
      for (j = 0; j < lenth; j++) {
        if (p[j] >= 10) {
          p[j + 1] += p[j] / 10;
          p[j] %= 10;
        }
      }
      if (p[j]) lenth++;
    }
    p[0] -= 2;

    for (i = 0; i < lenth; i++) p[i] += '0';
    strrev(p);
    printf("%s\n", p);
    HEAD = 0;
  }
  return 0;
}
