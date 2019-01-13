#include<iostream>
#include<vector>
#include<string>

using std :: cout;
using std :: endl;
using std :: string;
using std :: vector;

int main () {
  vector<int> v1{1,2,3};
  vector<string> v2{"1","2","4"};
  int a[] = {1,2,3};
  cout << sizeof v1 << endl;
  cout << sizeof v2 << endl;
  cout << sizeof a << endl;
  cout << sizeof(int) << endl;
  return 0;
}
