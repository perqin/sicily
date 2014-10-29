// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 3496.c: http://soj.me/3496
#include<stdio.h>

int main() {
  int a, b, x, y;
  while (scanf("%d %d", &a, &b) && (a || b)) {
    if (b % 2 || 2 * a > b || 4 * a < b) {
      printf("No answer\n");
    } else {
      x = 2 * a - b / 2;
      y = b / 2 - a;
      printf("%d %d\n", x, y);
    }
  }
  return 0;
}
