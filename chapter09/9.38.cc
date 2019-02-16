#include<vector>
#include<iostream>

using std :: vector;
using std :: cout;
using std :: endl;

void printSizeAndCapacity(vector<int>& v) {
  cout << "size is-> " << v.size() << " capacity is-> " << v.capacity() << endl;
}

int main() {
  vector<int> v;
  printSizeAndCapacity(v);
  for(vector<int> :: size_type i = 0; i < 24; i++) {
    v.push_back(i);
  }
  printSizeAndCapacity(v);
  v.reserve(50);
  printSizeAndCapacity(v);
  while(v.size() != v.capacity()) {
    v.push_back(0);
  }
  printSizeAndCapacity(v);
  v.push_back(51);
  printSizeAndCapacity(v);
  v.shrink_to_fit();
  printSizeAndCapacity(v);
  return 0;
}
