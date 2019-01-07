#include<iostream>
#include<string>
using std :: cout;
using std :: endl;
using std :: string;

int main () {
  string s = "123sds";
  for (char &c : s) {
    c = 'X';
  }
  cout << "s si " << s << endl;
  string s1;
  cout << "first is(" << s1[0] << ")" << endl;

  const string s2 = "abc";
  for (auto &c : s2) {
    // c = 'x';
    cout << c << endl;
  }
  return 0;
}
