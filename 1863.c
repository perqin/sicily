// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 1863.c: http://soj.me/1863
#include<stdio.h>
#include<string.h>

void matrix_copy(long long matrix_2[2][2], long long matrix_tmp[2][2]) {
  int i, j;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      matrix_2[i][j] = matrix_tmp[i][j];
    }
  }
}

void matrix_multiplication(long long matrix_1[2][2],
                           long long matrix_2[2][2],
                           long long m) {
  long long matrix_tmp[2][2] = { 0 };
  matrix_tmp[0][0] = (matrix_1[0][0] * matrix_2[0][0]
                      + matrix_1[0][1] * matrix_2[1][0]) % m;
  matrix_tmp[1][0] = (matrix_1[1][0] * matrix_2[0][0]
                      + matrix_1[1][1] * matrix_2[1][0]) % m;
  matrix_tmp[0][1] = (matrix_1[0][0] * matrix_2[0][1]
                      + matrix_1[0][1] * matrix_2[1][1]) % m;
  matrix_tmp[1][1] = (matrix_1[1][0] * matrix_2[0][1]
                      + matrix_1[1][1] * matrix_2[1][1]) % m;
  matrix_copy(matrix_2, matrix_tmp);
}

void matrix_pow(long long matrix[2][2],
                long long matrix_tmp[2][2],
                long long n, long long m) {
  if (n == 0) {
    matrix_tmp[0][0] = 0;
    return;
  } else if (n == 1) {
    return;
  }

  n -= 2;
  while (n) {
    if (n & 1) matrix_multiplication(matrix, matrix_tmp, m);
    matrix_multiplication(matrix, matrix, m);
    n >>= 1;
  }
  return;
}

int main() {
  int T;
  long long n, m;
  long long matrix_0[2][2] = { { 1, 1 }, { 1, 0 } },
    matrix_result[2][2] = { { 1, 1 }, { 1, 0 } },
    matrix_tmp[2][2] = { { 1, 1 }, { 1, 0 } };

  scanf("%d", &T);
  while (T--) {
    matrix_copy(matrix_tmp, matrix_0);
    matrix_copy(matrix_result, matrix_0);
    scanf("%lld %lld", &n, &m);
    matrix_pow(matrix_tmp, matrix_result, n, m);
    printf("%d\n", matrix_result[0][0]);
  }

  return 0;
}
