// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 1200.cpp: http://soj.me/1200
#include <iostream>

#define MAX_SIZE 100
using std::cin;
using std::cout;
using std::endl;

int main() {
  int stick_num;
  while (cin >> stick_num && stick_num) {  // input the number of sticks
    int length[MAX_SIZE] = { 0 };
    for (int i = 0; i < stick_num; i++) cin >> length[i];

    // to determine whether we can find a partner for sticks of a length
    // as we don't need to record the length of sticks in pair,
    // so we can delete them and contain the length left.
    for (int i = 0; i < stick_num; i++) {
      for (int j = i+1; j < stick_num; j++) {
        if (length[i] > 0 && length[j] == length[i]) {
          length[i] = length[j] = 0;
          break;
        }
      }
    }

    // get the left stick length
    int sum = 0;
    for (int i = 0; i < stick_num; i++) sum += length[i];
    cout << sum << endl;
  }

  return 0;
}
