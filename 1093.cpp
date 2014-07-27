// 1093.cpp
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int min(int a, int b, int c) {
  return a < b ? (a < c ? a : c) : (b < c ? b : c);
}

int main() {
  int weight1, weight2, weight3;
  int rate1, rate2, rate3, rate4;
  int set_number = 1;

  while (cin >> weight1 >> rate1) {
    cin >> weight2 >> rate2 >> weight3 >> rate3 >> rate4;
    int bound1 = (weight1 + 1) * rate2,
      bound2 = (weight2 + 1) * rate3,
      bound3 = (weight3 + 1) * rate4;
    int min_bound = min(bound1, bound2, bound3);

    cout << "Set number " << set_number << ":" << endl;
    set_number++;

    // here we calculate the result by considering each situation.
    int weight = 0;
    while (cin >> weight && weight) {
      if (weight <= weight1) {
        if (weight * rate1 <= min_bound) {
          cout << "Weight (" << weight << ") has best price $" << weight*rate1
            << " (add 0 pounds)" << endl;
        } else {
          if (min_bound == bound1) {
            cout << "Weight (" << weight << ") has best price $" << bound1
              << " (add " << weight1 + 1 - weight << " pounds)" << endl;
          } else if (min_bound == bound2) {
            cout << "Weight (" << weight << ") has best price $" << bound2
              << " (add " << weight2 + 1 - weight << " pounds)" << endl;
          } else if (min_bound == bound3) {
            cout << "Weight (" << weight << ") has best price $" << bound3
              << " (add " << weight3 + 1 - weight << " pounds)" << endl;
          }
        }
      } else if (weight <= weight2) {
        if (bound2 <= bound3) {
          if (weight * rate2 <= bound2) {
            cout << "Weight (" << weight << ") has best price $"
              << weight * rate2 << " (add 0 pounds)" << endl;
          } else {
            cout << "Weight (" << weight << ") has best price $" << bound2
              << " (add " << weight2 + 1 - weight << " pounds)" << endl;
          }
        } else {
          if (weight * rate2 <= bound3) {
            cout << "Weight (" << weight << ") has best price $"
              << weight * rate2 << " (add 0 pounds)" << endl;
          } else {
            cout << "Weight (" << weight << ") has best price $" << bound3
              << " (add " << weight3 + 1 - weight << " pounds)" << endl;
          }
        }
      } else if (weight <= weight3) {
        if (weight * rate3 <= bound3) {
          cout << "Weight (" << weight << ") has best price $"
            << weight * rate3 << " (add 0 pounds)" << endl;
        } else {
          cout << "Weight (" << weight << ") has best price $" << bound3
            << " (add " << weight3 + 1 - weight << " pounds)" << endl;
        }
      } else {
        cout << "Weight (" << weight << ") has best price $"
          << weight * rate4 << " (add 0 pounds)" << endl;
      }
    }
    cout << endl;  // here will present extra whiteline at the end of file.
  }

  return 0;
}
