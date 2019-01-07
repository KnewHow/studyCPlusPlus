#include<iostream>
#include<string>
#include<cctype>

using std :: cout;
using std :: endl;
using std :: string;

int main () {
  string s = "Hello, C Plus Plus!";
  string s2;
  decltype(s.size()) punct_cnt = 0;
  for (auto &c : s) {
    if(!ispunct(c)) {
      s2 += c;
    } else {
      punct_cnt ++;
    }
  }
  cout << "punct couter is " << punct_cnt << endl;
  cout << "s2 is " << s2 << endl;
  return 0;
}
