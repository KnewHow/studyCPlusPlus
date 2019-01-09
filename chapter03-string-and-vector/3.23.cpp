#include<iostream>
#include<vector>

using std :: cout;
using std :: vector;
using std :: endl;

int main () {
  vector<int> v{12,10, 22, 33,44};
  for (auto c = v.begin(); c != v.end(); c++) {
    *c = *c * 2;
  }
  for (auto c =  v.begin(); c!= v.end(); c++) {
    cout << "result is ->" << *c <<endl;
  }
  return 0;
}
