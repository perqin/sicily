// Problem#: 1323
// Submission#: 2661187
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<stdio.h>
#include<string.h>

char* strrev(char *str) {
  char *h = str, *t = str, ch;
  while (*t++) {}
  t--;
  t--;
  while (h < t) {
    ch = *h;
    *h++ = *t;
    *t-- = ch;
  }
  return str;
}

void reverse(char* str) {
  char tmp_str[10000 + 10];
  int mid = strlen(str) / 2;
  memset(tmp_str, 0, sizeof(tmp_str));
  strrev(str);
  strncpy(tmp_str, str, mid*sizeof(char));
  strrev(str);
  if ((strlen(str) % 2)) mid++;
  str[mid] = 0;
  strrev(str);
  strcat(str, tmp_str);
}

bool checkEmptyLine(char* str) {
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] != ' ')
      return true;
  }
  return false;
}

int main() {
  char str1[10000 + 10] = { 0 }, str2[10000 + 10] = { 0 };

  while (gets(str1)) {
    gets(str2);
    if (str2[0] && checkEmptyLine(str2)) {
      reverse(str2);
      printf("%s\n", str2);
    }

    if (str1[0] && checkEmptyLine(str1)) {
      reverse(str1);
      printf("%s\n", str1);
    }

    memset(str1, 0, sizeof(str1));
    memset(str2, 0, sizeof(str2));
  }
  return 0;
}
