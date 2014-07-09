// Problem#: 1194
// Submission#: 2869483
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include<iostream>
#include<map>
#include<string>

using namespace std;

void tolower(string* name) {
  for (int i = 0; i < name->length(); i++) {
    if ((*name)[i] < 96) (*name)[i] += 32;
  }
}

int main() {
  int n, m;
  while (cin >> n && n) {
    cin >> m;
    map<string, bool> list;
    string name;
    for (int i = 0; i < n; i++) {
      cin >> name;
      tolower(&name);
      list[name] = false;
    }
    int counter = 0;
    map<string, bool>::iterator it;
    for (int i = 0; i < m; i++) {
      cin >> name;
      tolower(&name);
      it = list.find(name);
      if (it != list.end() && list[name] == false) {
        counter++;
        list[name] = true;
      }
    }
    cout << n - counter << endl;
  }
  return 0;
}

