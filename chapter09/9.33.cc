#include<vector>
#include<iostream>

using std :: vector;

int main() {
  vector<int> v{1,2,3,4};
  auto begin = v.begin();
  while(begin != v.end()) {
    ++ begin;
    v.insert(begin,42);
    ++ begin;
  }
  return 0;
}
