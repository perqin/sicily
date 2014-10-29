// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 1931.c: http://soj.me/1931
#include<stdio.h>
#include<string.h>

int main() {
  int i, j, T, n, card[80 + 1];
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &n);
    memset(card, 0, sizeof(card));
    for (i = 0; i < n; i++) card[i] = i + 1;
    for (i = 0, j = n; card[i]; i += 2) {
      printf("%d ", card[i]);
      card[j++] = card[i + 1];
    }
    printf("\n");
  }
  return 0;
}
