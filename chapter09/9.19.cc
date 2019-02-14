#include<iostream>
#include<list>
#include<string>
using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;
using std :: list;
using std :: istream;

list<string> read(istream &in) {
  string word;
  list<string> d;
  while(in >> word) {
    d.push_back(word);
  }
  return d;
}

void print(list<string> d) {
  for(const auto e : d) {
    cout << e << endl;
  }
}


int main () {
  auto r = read(cin);
  print(r);
  return 0;
}
