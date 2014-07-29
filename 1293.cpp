// 1293.cpp: http://soj.me/1293
// TLE first time. Use an int data to reduce the time.
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include<stdio.h>
#include<string.h>

char* strrev(char* str) {
  char *h = str, *t = str;
  char ch;
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

int get_precision(char* str, int PRECISION) {
  int len = 0, i = 0;
  while (str[i]) {
    while (str[i] && str[i++] != '.') {}
    break;
  }
  len += i;
  len += PRECISION;
  if (str[len] >= '5') {
    if (str[len - 1] == '.') str[i - 2]++;
    else str[len - 1]++;
    for (i = len; i; i--) {
      if (str[i] > '9') {
        str[i] -= 10;
        if (str[i - 1] == '.') str[i - 2]++;
        else str[i - 1]++;
      }
    }
  }
  str[len] = 0;
  if (str[0] > '9') {
    strrev(str);
    str[len] = '1';
    str[len - 1] -= 10;
    len++;
    strrev(str);
  }
  if (len > 1) {
    len--;
  } else {
    strcat(str, ".");
  }
  return len;
}

void change_format(char* out, char* value, int lenth, int WIDTH) {
  int h = 2 * (WIDTH - lenth), i = 0;
  if (lenth > WIDTH) h = 0;

  while (value[i] && (h < 2 * WIDTH)) {
    switch (value[i]) {
      case '0':
        if (value[i + 1] != '.') {
          out[h] = '8';
          out[h + 1] = '8';
        } else {
          out[h] = '0';
          out[h + 1] = '8';
        }
        break;

      case '1':
        if (value[i + 1] != '.') {
          out[h] = 'D';
          out[h + 1] = 'B';
        } else {
          out[h] = '5';
          out[h + 1] = 'B';
        }
        break;

      case '2':
        if (value[i + 1] != '.') {
          out[h] = 'A';
          out[h + 1] = '2';
        } else {
          out[h] = '2';
          out[h + 1] = '2';
        }
        break;

      case '3':
        if (value[i + 1] != '.') {
          out[h] = '9';
          out[h + 1] = '2';
        } else {
          out[h] = '1';
          out[h + 1] = '2';
        }
        break;

      case '4':
        if (value[i + 1] != '.') {
          out[h] = 'D';
          out[h + 1] = '1';
        } else {
          out[h] = '5';
          out[h + 1] = '1';
        }
        break;

      case '5':
        if (value[i + 1] != '.') {
          out[h] = '9';
          out[h + 1] = '4';
        } else {
          out[h] = '1';
          out[h + 1] = '4';
        }
        break;

      case '6':
        if (value[i + 1] != '.') {
          out[h] = '8';
          out[h + 1] = '4';
        } else {
          out[h] = '0';
          out[h + 1] = '4';
        }
        break;

      case '7':
        if (value[i + 1] != '.') {
          out[h]
            = 'D';
          out[h + 1] = 'A';
        } else {
          out[h] = '5';
          out[h + 1] = 'A';
        }
        break;

      case '8':
        if (value[i + 1] != '.') {
          out[h] = '8';
          out[h + 1] = '0';
        } else {
          out[h] = '0';
          out[h + 1] = '0';
        }
        break;

      case '9':
        if (value[i + 1] != '.') {
          out[h] = 'D';
          out[h + 1] = '0';
        } else {
          out[h] = '5';
          out[h + 1] = '0';
        }
        break;
    }
    h += 2;
    if (value[i + 1] == '.') i += 2;
    else i++;
  }
}

void output(char* out) {
  int i = 0;
  while (out[i]) {
    printf("%c%c", out[i], out[i + 1]);
    i += 2;
  }
}

int main() {
  int WIDTH, PRECISION, lenth;
  char value[64 + 5] = { 0 }, out[64 + 5] = { 0 };

  while (scanf("%d,%d,%s", &WIDTH, &PRECISION, value) != EOF) {
    memset(out, 0, sizeof(out));
    memset(out, 'F', 2 * WIDTH);

    lenth = get_precision(value, PRECISION);
    change_format(out, value, lenth, WIDTH);

    output(out);
    printf("\n");
  }

  return 0;
}
