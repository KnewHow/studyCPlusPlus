#include<iostream>
#include<vector>
#include<list>

using std :: vector;
using std :: list;
using std :: end;
using std :: cout;
using std :: endl;

int main() {
  int a[] = {0,1,2,3,5,8,13,21,55,89};
  vector<int> v(a, end(a));
  list<int> l(a, end(a));
  auto vt = v.begin();
  while(vt != v.end()) {
    if(*vt % 2 == 0) {
      vt = v.erase(vt);
    } else {
      vt++;
    }
  }
  for(const auto e : v) {
    cout << e << endl;
  }
  cout << "--------------------" << endl;
  auto lt = l.begin();
  while(lt != l.end()) {
    if(*lt % 2 != 0) {
      lt = l.erase(lt);
    } else {
      lt++;
    }
  }
  for(const auto e : l) {
    cout << e << endl;
  }
  return 0;
}
