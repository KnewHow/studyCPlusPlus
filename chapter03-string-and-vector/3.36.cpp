#include<iostream>
#include<vector>
#include<iterator>

using std :: cout;
using std :: endl;
using std :: begin;
using std :: end;
using std :: vector;

int main () {
  int a1[] = {1,2,3,4};
  int a2[] = {1,2,3,4};
  bool flag = true;
  int *a1b = begin(a1), *a2b = begin(a2);
  for(; a1b != end(a1), a2b != end(a2); a1b++,a2b++) {
    if ((*a1b) != (*a2b)) {
      flag = false;
      break;
    }
  }
  if (flag) {
    if(a1b == end(a1) && a2b == end(a2)) {
      flag = true;
    } else {
      flag = false;
    }
  }
  cout << "array compare result " << flag << endl;

  vector<int> v1{1,2,3,4};
  vector<int> v2{1,2,3,6};
  auto v1b = v1.begin(), v2b = v2.begin();
  auto tag = true;
  for(; v1b != v1.end() && v2b != v2.end(); v1b++, v2b++) {
    if((*v1b) != (*v2b)) {
      tag = false;
      break;
    }
  }
  if(tag) {
    if(v1b == v1.end() && v2b == v2.end()) {
      tag = true;
    } else {
      tag = false;
    }
  }
  cout << "vector compare result is " << tag << endl;
  return 0;
}
