// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 1482.cpp: http://soj.me/1482
#include<stdio.h>
#include<string.h>

typedef struct {
  int id;
  int Chinese;
  int math;
  int English;
  int sum;
} Student;

void sort(Student* array, int n) {
  Student tmp;
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = i; j < n; j++) {
      if (array[i].sum < array[j].sum) {
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
      if (array[i].sum == array[j].sum
          && array[i].Chinese < array[j].Chinese) {
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
      if (array[i].sum == array[j].sum
          && array[i].Chinese == array[j].Chinese
          && array[i].id>array[j].id) {
        tmp = array[i];
        array[i] = array[j];
        array[j] = tmp;
      }
    }
  }
}

int main() {
  int i, n, HEAD = 1;
  Student attend[10000 + 1];
  while (scanf("%d", &n) != EOF) {
    if (!HEAD) printf("\n");

    memset(attend, '\0', sizeof(attend));
    for (i = 0; i < n; i++) {
      attend[i].id = i + 1;
      scanf("%d %d %d",
            &attend[i].Chinese, &attend[i].math, &attend[i].English);
      attend[i].sum = attend[i].Chinese
        + attend[i].math + attend[i].English;
    }

    sort(attend, n);

    for (i = 0; i < (n > 5 ? 5 : n); i++) {
      printf("%d %d\n", attend[i].id, attend[i].sum);
    }
    HEAD = 0;
  }
  return 0;
}
