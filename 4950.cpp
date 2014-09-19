// 4950.cpp: http://soj.me/4950
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Cube {
public:
  Cube(int length = 0, int width = 0, int height = 0) {
    length_ = length;
    width_ = width;
    height_ = height;
  }
  int getLength() { return length_; }
  void setLength(int length = 0) { length_ = length; }
  int getWidth() { return width_; }
  void setWidth(int width = 0) { width_ = width; }
  int getHeight() { return height_; }
  void setHeight(int height = 0) { height_ = height; }
  int getVolume() { return length_ * width_* height_; }
private:
  int length_;
  int width_;
  int height_;
};

int main() {
  for (int i = 0; i < 3; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    Cube cube(a, b, c);
    cout << cube.getVolume() << endl;
  }
  return 0;
}
