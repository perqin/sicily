// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 9992.h: http://soj.me/9992
#include<iostream>

void bubbleSort(double list[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = size - 1; j > i; j--) {
      if (list[i] > list[j]) {
        double tmp = list[i];
        list[i] = list[j];
        list[j] = tmp;
      }
    }
  }
}
