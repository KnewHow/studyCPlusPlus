#include<iostream>
#include<vector>

using std :: vector;

vector<int> :: iterator  search(vector<int> :: iterator begin, vector<int> :: iterator end, int value) {
  while(begin != end) {
    if (* begin == value) {
      return begin;
    } else {
      ++ begin;
    }
  }
  return begin;
}

int main() {
  return 0;
}
