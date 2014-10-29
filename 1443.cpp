// Copyright (c) 2014 Junjie_Huang@SYSU (SNO:13331087). ALL Rights Reserved.
// 1443.cpp: http://soj.me/1443
#include<iostream>
#include<queue>
using std::cin;
using std::cout;
using std::endl;
 
struct Job {
  // for the position of the jobs can be changed
  // we need to record the initial position of each job.
  int initial_position;
  int priority;
};
 
int main() {
  int testCase;
  cin >> testCase;
  while (testCase--) {
    int n, position, max_priority = 0;
    std::queue<Job> Que;
    cin >> n >> position;
    for (int i = 0; i < n; i++) {
      Job p;
      p.initial_position = i;
      cin >> p.priority;
      if (max_priority < p.priority) max_priority = p.priority;
      Que.push(p);
    }
    int counter = 0;
    while (Que.front().initial_position != position ||
           Que.front().priority < max_priority) {
      while (Que.front().priority < max_priority) {
        Job temp = Que.front();
        Que.pop();
        Que.push(temp);
      }
      if (Que.front().initial_position == position) break;
      Que.pop();
      counter++;
      n--;
      std::queue<Job> newQue;
      max_priority = 0;
      for (int i = 0; i < n; i++) {
        Job p = Que.front();
        if (max_priority < p.priority) max_priority = p.priority;
        newQue.push(p);
        Que.pop();
      }
      Que = newQue;
    }
    cout << counter + 1 << endl;
  }
  return 0;
}
