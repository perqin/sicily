// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 4629.c: http://soj.me/4629
#include<stdio.h>

int GCD(int a, int b);
int main() {
  int T, a, b, c, d, up, down, tmp;
  scanf("%d", &T);
  while (T--) {
    scanf("%d %d %d %d", &a, &b, &c, &d);
    up = a*d + b*c;
    down = b*d;
    tmp = GCD(up, down);
    (tmp == down || down == 0) ?
      printf("%d\n", up / tmp) : printf("%d/%d\n", up / tmp, down / tmp);
  }
}

int GCD(int a, int b) {
  if (b == 0) return a;
  return GCD(b, a%b);
}
