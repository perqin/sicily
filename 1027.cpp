// 1027.cpp
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <string>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct Person {
  string main_ID_;
  string IP_;
  string MJ_;
};

int main() {
  int n;
  while (cin >> n && n && n % 2 == 0) {  // if the input is an odd number.
    Person list[20 + 1];
    string ID;
    string IP;
    int len = 0;

    for (int i = 0; i < n; i++) {
      cin >> ID >> IP;
      for (int j = 0; j <= len; j++) {
        if (j == len) {
          list[j].main_ID_ = ID;
          list[j].IP_ = IP;
          len++;
          break;
        } else if (list[j].IP_ == IP) {
          list[j].MJ_ = ID;
          break;
        }
      }
    }

    // here is an algorithm that can be simplified.
    for (int i = 0; i < len; i++) {
      for (int j = 0; j < len; j++) {
        if (list[i].main_ID_ < list[j].main_ID_) {
          Person temp = list[i];
          list[i] = list[j];
          list[j] = temp;
        }
      }
    }

    for (int i = 0; i < len; i++) {
      cout << list[i].MJ_ << " is the MaJia of " << list[i].main_ID_ << endl;
    }
    cout << endl;
  }
  return 0;
}
