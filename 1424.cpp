// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
// 1424.cpp: http://soj.me/1424
#include <iostream>
#include <queue>
#include <vector>

#define MAX_SIZE 10000  // the max size of nodes

using std::cin;
using std::cout;
using std::endl;

using std::string;
using std::queue;
using std::vector;  // uses vector to build an adjacency list

// As there is only one test case in the program,
// we can declare the list as global param.
vector<int> list[MAX_SIZE + 1];
int in_degree[MAX_SIZE + 1] = { 0 };  // an array shows the indegrees of nodes
int money[MAX_SIZE + 1] = { 0 };  // the extra money that one will get

int main() {
  // @Param n: the number of all employees
  // @Param m: the number of represents
  int n, m;
  cin >> n >> m;

  int a, b;  // a is the employee that has more money than b
  for (int i = 0; i < m; i++) {
    cin >> a >> b;
    list[b].push_back(a);  // create an edge from b to a
    in_degree[a]++;        // thus the in degree of a adds one
  }

  // first puts the nodes that has a zero in degree
  // to a queue we need to deal with, so that we can know
  // these employees the nodes represents will get no extra money
  queue<int> que;
  for (int i = 1; i <= n; i++) {
    if (in_degree[i] == 0)
      que.push(i);
  }

  int total = 0;  // all the money the employer need to pay
  int sorted = 0;  // the number show if we have sort all employee.
  while (!que.empty()) {
    int temp = que.front();
    que.pop();
    total += money[temp];  // gets all extra money
    sorted++;
    for (int i = 0; i < list[temp].size(); i++) {
      in_degree[list[temp][i]]--;
      if (in_degree[list[temp][i]] == 0) {  // has had access to the node
        que.push(list[temp][i]);
      }
      money[list[temp][i]] = money[temp] + 1;
    }
  }
  total += n * 100;  // adds basic money

  // if sorted is not equal the employees' number, there is aleast a loop
  // and can't saticsfied the conditionals.
  if (sorted == n)
    cout << total << endl;
  else
    cout << "Poor Xed" << endl;

  return 0;
}
