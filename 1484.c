// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 1484.c: http://soj.me/1484
#include <stdio.h>

int main() {
  int m, s, t, T, S, f = 0;
  while (scanf("%d %d %d", &m, &s, &t) != EOF) {
    if (f) printf("\n");
    T = t;
    S = s;
    while (m / 10 >= 1 && t >= 1) {
      m = m - 10;
      s = s - 60;
      t--;
    }
    while (m < 10 && t >= 1) {
      if (m == 0 && s > 102 && t >= 7) {
        t = t - 7;
        s = s - 120;
      }
      if (m == 1 && s > 102 && t >= 7) {
        t = t - 7;
        s = s - 120;
      }
      if (m == 2 && s > 34 && t >= 3) {
        t = t - 3;
        s = s - 60;
        m = 0;
      }
      if (m == 3 && s > 34 && t >= 3) {
        t = t - 3;
        s = s - 60;
        m = 1;
      }
      if (m == 4 && s > 34 && t >= 3) {
        t = t - 3;
        s = s - 60;
        m = 2;
      }
      if (m == 5 && s > 34 && t >= 3) {
        t = t - 3;
        s = s - 60;
        m = 3;
      }
      if (m == 6 && s > 17 && t >= 2) {
        t = t - 2;
        s = s - 60;
        m = 0;
      }
      if (m == 7 && s > 17 && t >= 2) {
        t = t - 2;
        s = s - 60;
        m = 1;
      }
      if (m == 8 && s > 17 && t >= 2) {
        t = t - 2;
        s = s - 60;
        m = 2;
      }
      if (m == 9 && s > 17 && t >= 2) {
        t = t - 2;
        s = s - 60;
        m = 3;
      }
      if (m == 0 && (s <= 102 || t < 7)) break;
      if (m == 1 && (s <= 102 || t < 7)) break;
      if (m == 2 && (s <= 34 || t < 3)) break;
      if (m == 3 && (s <= 34 || t < 3)) break;
      if (m == 4 && (s <= 34 || t < 3)) break;
      if (m == 5 && (s <= 34 || t < 3)) break;
      if (m == 6 && (s <= 17 || t < 2)) break;
      if (m == 7 && (s <= 17 || t < 2)) break;
      if (m == 8 && (s <= 17 || t < 2)) break;
      if (m == 9 && (s <= 17 || t < 2)) break;
    }
    while (t >= 1 && s > 0) {
      s = s - 17;
      t = t - 1;
    }
    if (s > 0) printf("No\n%d\n", S - s);
    else printf("Yes\n%d\n", T - t);
    f = 1;
  }
  return 0;
}
