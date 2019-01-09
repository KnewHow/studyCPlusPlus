#include<iostream>
#include<vector>

using std :: cout;
using std :: endl;
using std :: vector;
using std :: begin;
using std :: end;

int main () {
  int a[] = {1,2,3,4,5};
  vector<int> v(a + 2, end(a));
  for (auto e : v) {
    cout << "v is " << e << endl;
  }
  return 0;
}
