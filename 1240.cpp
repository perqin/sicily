// Problem#: 1240
// Submission#: 2869152
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
#include<cmath>

using namespace std;

int main() {
  int input;
  while (cin >> input && input) {
    int n = input;
    int result = 0;
    int counter = 0;
    while (input) {
      int temp = input % 10;
      input /= 10;
      if (temp <= 3) {
        result += temp*pow(9, counter);
      } else {
        result += (temp - 1)*pow(9, counter);
      }
      counter++;
    }
    cout << n << ": " << result << endl;
  }
}
