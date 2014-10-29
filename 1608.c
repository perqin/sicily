// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 1608.c: http://soj.me/1608
#include<stdio.h>
#include<string.h>

void output_line(int* counter) {
  int i;
  for (i = 0; i <= 9; i++) {
    if (i) printf(" ");
    printf("%d", counter[i]);
  }
  printf("\n");
}

int main() {
  int i, T, N, a;
  int counter[10 + 1] = { 0 };
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
      a = i;
      for (; a; a /= 10) counter[a % 10]++;
    }

    output_line(counter);

    memset(counter, 0, sizeof(counter));
  }

  return 0;
}
