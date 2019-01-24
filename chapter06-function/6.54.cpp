#include<iostream>
#include<vector>

using std :: vector;
using std :: cout;
using std :: endl;

int sum(int a, int b) {
  return a + b;
}
int main () {
  vector<int(*)(int,int)> v{&sum};
  cout << "vector is " << v[0](1,3) << endl;
  return 0;
}
