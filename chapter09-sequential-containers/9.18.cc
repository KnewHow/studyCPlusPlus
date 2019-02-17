#include<iostream>
#include<deque>
#include<string>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;
using std :: deque;
using std :: istream;

deque<string> read(istream &in) {
  string word;
  deque<string> d;
  while(in >> word) {
    d.push_back(word);
  }
  return d;
}

void print(deque<string> d) {
  for(const auto e : d) {
    cout << e << endl;
  }
}

int main() {
  auto r = read(cin);
  print(r);
  return 0;
}
