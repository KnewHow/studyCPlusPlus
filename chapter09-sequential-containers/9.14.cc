#include<iostream>
#include<list>
#include<vector>
#include<string>

using std :: vector;
using std :: list;
using std :: string;

vector<string> listCharArrToVectorString(list<char *> l) {
  vector<string> v;
  v.assign(l.begin(), l.end());
  return v;
}

int main() {
  return 0;
}
