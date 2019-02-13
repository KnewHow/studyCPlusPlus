#include<iostream>
#include<vector>
#include<list>

using std :: vector;
using std :: list;
using std :: cout;
using std :: endl;

vector<double> listToVector(list<int> l) {
  vector<double> v(l.begin(), l.end());
  return v;
}

vector<double> vectorToVector(vector<int> v) {
  vector<double> v2(v.begin(), v.end());
  return v2;
}

void print(vector<double> v) {
  for(const auto e: v) {
    cout << e << endl;
  }
}

int main() {
  list<int> l{1,2,3};
  auto r = listToVector(l);
  print(r);
  return 0;
}
