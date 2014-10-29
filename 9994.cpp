// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 9994.cpp: http://soj.me/9994
#include<iostream>
using namespace std;

class employee {
public:
  int Num;
  int day_hours[7];
  int week_hours;

  void get_day_hours() {
    for (int i = 0; i < 7; i++) cin >> day_hours[i];
  }

  void get_week_hours() {
    week_hours = 0;
    for (int i = 0; i < 7; i++) week_hours += day_hours[i];
  }

};

void sort(employee* list, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = size - 1; j > i; j--) {
      if (list[i].week_hours < list[j].week_hours) {
        employee tmp = list[i];
        list[i] = list[j];
        list[j] = tmp;
      }
      if (list[i].week_hours == list[j].week_hours
          && list[i].Num>list[j].Num) {
        employee tmp = list[i];
        list[i] = list[j];
        list[j] = tmp;
      }
    }
  }
}

int main() {
  int T;
  cin >> T;

  for (int i = 1; i <= T; i++) {
    int N;
    char key[10];
    employee Emp[100];

    cin >> N;
    for (int j = 0; j < N; j++) {
      Emp[j].Num = j;
      Emp[j].get_day_hours();
    }
    for (int j = 0; j < N; j++) Emp[j].get_week_hours();
    sort(Emp, N);

    cout << "test case " << i << ':' << endl;
    for (int j = 0; j < N; j++) {
      cout << "Employee " << Emp[j].Num
        << ": " << Emp[j].week_hours << endl;
    }
  }

  return 0;
}
