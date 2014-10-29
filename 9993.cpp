// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 9993.cpp: http://soj.me/9993
#include<iostream>
using namespace std;

class student {
 public:
  int Num;
  char answer[10];
  int mark;

  void get_answer() {
    for (int i = 0; i < 10; i++) cin >> answer[i];
  }

  void get_mark(char* key) {
    mark = 0;
    for (int i = 0; i < 10; i++) {
      if (answer[i] == key[i]) mark++;
    }
  }

};

void sort(student* list, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = size - 1; j > i; j--) {
      if (list[i].mark >list[j].mark) {
        student tmp = list[i];
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
    student Stu[100];

    cin >> N;
    for (int j = 0; j < N; j++) {
      Stu[j].Num = j;
      Stu[j].get_answer();
    }
    for (int j = 0; j < 10; j++) cin >> key[j];

    for (int j = 0; j < N; j++) Stu[j].get_mark(key);
    sort(Stu, N);

    cout << "test case " << i << ':' << endl;
    for (int j = 0; j < N; j++) {
      cout << "Student " << Stu[j].Num << ": " << Stu[j].mark << endl;
    }
  }

  return 0;
}
