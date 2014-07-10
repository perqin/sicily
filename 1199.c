// Problem#: 1199
// Submission#: 2665572
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>
#include<string.h>

void quick_sort(int* str, int HEAD, int END) {
  int i = HEAD, j = END, mid = str[(i + j) / 2];
  do {
    while (str[i] < mid) i++;
    while (str[j] > mid) j--;
    if (i <= j) {
      int tmp = str[i];
      str[i] = str[j];
      str[j] = tmp;
      i++, j--;
    }
  } while (i <= j);
  if (HEAD < j) quick_sort(str, HEAD, j);
  if (i < END) quick_sort(str, i, END);
}

int euler(int n) {
  int ret = 1, i;
  for (i = 2; i*i <= n; i++) {
    if (n%i == 0) {
      n /= i;
      ret *= i - 1;
      while (n%i == 0) {
        n /= i;
        ret *= i;
      }
    }
  }
  if (n > 1)
    ret *= n - 1;
  return ret;
}

int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int i, N, M, cnt = 0, result = 0, factor[10000] = { 0 };
    scanf("%d %d", &N, &M);
    for (i = 1; i*i < N; i++) {
      if (!(N%i)) {
        factor[cnt++] = i;
        factor[cnt++] = N / i;
      }
    }
    if (!(N%i)) factor[cnt++] = i;
    quick_sort(factor, 0, cnt - 1);
    for (i = 0; i < cnt && factor[i] < M; i++) {}
    for (int j = i; j < cnt; j++) result += euler(N / factor[j]);
    printf("%d\n", result);
  }
  return 0;
}
