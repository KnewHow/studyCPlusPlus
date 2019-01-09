#include<iostream>
#include<cstddef>

using std :: cout;
using std :: endl;
int main () {
  int a[10]= {};
  for(size_t i = 0; i < 10 ;i++) {
    a[i] = i;
  }
  for(auto e : a) {
    cout << e << endl;
  }
  return 0;
}
