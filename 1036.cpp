// 1036.cpp: http://soj.me/1036
// Copyright (c) 2014 Junjie_Huang@SYSU(SNO:13331087). All Rights Reserved.
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  string key_word, str;
  while ((cin >> key_word) && key_word != "THEEND") {
    cin >> str;
    std::vector< std::pair<char, int> > key;
    for (int i = 0; i < key_word.size(); i++)
      key.push_back(std::pair<char, int>(key_word[i], i));
    sort(key.begin(), key.end());

    int columns_length = str.size() / key_word.size();
    char matrix[100 + 5][100 + 5] = { 0 };

    std::vector< std::pair<char, int> >::iterator it;
    int i = 0;
    for (it = key.begin(); it != key.end(); it++, i++) {
      for (int j = 0; j < columns_length; j++) {
        matrix[it->second][j] = str[i*columns_length + j];
      }
    }

    for (int i = 0; i < columns_length; i++)
    for (int j = 0; j < key_word.size(); j++)
      cout << matrix[j][i];
    cout << endl;
  }
}
