#include<string>
#include<iostream>

using std :: cout;
using std :: endl;
using std :: string;

void replaceViaIt(string &s, const string oldV, const string newV) {
  auto begin = s.begin();
  while(begin != s.end()) {
    string tmp(begin, begin+oldV.size());
    if(tmp == oldV) {
      begin = s.erase(begin,begin+oldV.size());
      begin = s.insert(begin, newV.begin(), newV.end());
      begin+= newV.size();
    } else {
      ++begin;
    }
  }
}

void replaceViaReplace(string &s, const string oldV, const string newV) {
  string :: size_type index = 0;
  while(index < s.size()) {
    string tmp(s, index,oldV.size());
    if(tmp == oldV) {
      s.replace(index, oldV.size(), newV);
      index += newV.size();
    } else {
      ++index;
    }
  }
}

int main() {
  string s1 = "Hethollo, Scala, tho xxxx";
  replaceViaIt(s1,"tho","though");
  cout << s1 << endl;
  cout << "-----------" << endl;
  string s2 = "Hethollo, Scala, tho xxxx";
  replaceViaReplace(s2,"tho","though");
  cout << s2 << endl;
  return 0;
}
