#include<iostream>
#include<string>
using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

int main () {
  string s1(10,'c');
  string s2;
  cin >> s2;
  if (s1 > s2) {
     cout << "s1 is " << s1 << endl;
  } else {
    cout << "s2 is " << s2 << endl;
  }

  return 0;
}
