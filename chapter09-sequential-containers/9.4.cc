#include<iostream>
#include<vector>

using std :: vector;

bool search(vector<int> :: iterator begin, vector<int> :: iterator end, int value) {
  while(begin != end) {
    if (* begin == value) {
      return true;
    } else {
      ++ begin;
    }
  }
  return false;
}

int main() {
  return 0;
}
