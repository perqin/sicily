// 1027.cpp£º a developed version
// I use class to encapsulate the structure and methods it use.
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <string>
#include <algorithm>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Person {
public:
  Person(string ID, string IP, string MJ = "") {
    main_ID_ = ID;
    IP_ = IP;
    MJ_ = MJ;
  }

  string getMainID() { return main_ID_; }
  void setMainID(string ID) { main_ID_ = ID; }
  string getIP() { return IP_; }
  void setIP(string IP) { IP_ = IP; }
  string getMJ() { return MJ_; }
  void setMJ(string ID) { MJ_ = ID; }

  // redim the operator of operator<
  bool operator<(Person B) {
    return getMainID() < B.getMainID();
  }

  friend std::ostream& operator<<(std::ostream& output, Person one) {
    output << one.MJ_ << " is the MaJia of " << one.main_ID_ << endl;
    return output;
  }

private:
  string main_ID_;
  string IP_;
  string MJ_;
};

int main() {
  int n;
  while (cin >> n && n && n % 2 == 0) {  // if the input is an odd number.
    std::list<Person> list;
    std::list<Person>::iterator it;
    string ID;
    string IP;

    for (int i = 0; i < n; i++) {
      cin >> ID >> IP;
      for (it = list.begin(); it != list.end(); it++) {
        if (it->getIP() == IP) {
          it->setMJ(ID);
          break;
        }
      }
      if (it == list.end()) {
        list.push_back(Person(ID, IP));
      }
    }

    // here is an algorithm simplified.
    list.sort();

    for (it = list.begin(); it != list.end(); it++) {
      cout << *it;
    }
  }
  return 0;
}
