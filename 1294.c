// Problem#: 1294
// Submission#: 2622054
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>

int main() {
  int i, a, b, c, s;
  scanf("%d %d %d", &a, &b, &c);
  for (s = 1, i = 1; i <= b; i++) s = s*a%c;
  printf("%d\n", s);
  return 0;
}
