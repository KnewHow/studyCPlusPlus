#include<iostream>
#include<string>

using std :: string;
using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  string s;
  s.reserve(200);
  char ch;
  while(cin >> ch) {
    s.push_back(ch);
  }
  cout << s << endl;
  return 0;
}
