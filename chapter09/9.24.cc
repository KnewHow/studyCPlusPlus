#include<iostream>
#include<vector>

using std :: vector;
using std :: cout;
using std :: endl;
int main() {
  vector<int> v{1,2,3,4};
  auto f1 = v.front();
  cout << "f1->" << f1 << endl;
  auto f2 = *v.begin();
  cout << "f2->" << f2 << endl;
  auto f3 = v[0];
  cout << "f3->" << f3 << endl;
  auto f4 = v.at(0);
  cout << "f4->" << f4 << endl;
  return 0;
}
