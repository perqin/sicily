// Problem#: 1052
// Submission#: 2326540
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>

int main() {
  int i, k = 0, n;
  int arr[1000], b[1000];
A: scanf("%d", &n);
  if (!n) return 0;
  for (i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
  }
  arr[0] = arr[n];

C: for (i = 1; i <= n; i++) {
  if (arr[i - 1] != arr[i]) {
    k++;
    goto B;
  }
}
   goto D;

B:for (i = 1; i <= n; i++) {
   b[i] = (arr[i - 1] + 1) / 2 + (arr[i] + 1) / 2;
}
  b[0] = b[n];
  for (i = 0; i <= n; i++) {
    if (b[i] % 2) b[i]++;
    arr[i] = b[i];
  }
  goto C;

D: printf("%d %d\n", k, arr[n]);
  k = 0;
  goto A;
}
