#include<iostream>
#include<string>

using std :: cout;
using std :: endl;
using std :: string;

string addPrefixAndSuffix1(const string name, const string prefix, const string suffix) {
  string s(name);
  s.insert(s.begin(), prefix.begin(), prefix.end());
  s.append(suffix);
  return s;
}

string addPrefixAndSuffix2(const string name, const string prefix, const string suffix) {
  string s(name);
  s.insert(s.begin(), prefix.begin(), prefix.end());
  s.insert(s.end(), suffix.begin(), suffix.end());
  return s;
}

int main() {
  string name = "KnewHow";
  string prefix = "Mr.";
  string suffix = " Jr";
  auto r1 = addPrefixAndSuffix1(name, prefix, suffix);
  cout << r1 << endl;
  cout << "---------------" << endl;
   auto r2 = addPrefixAndSuffix1(name, prefix, suffix);
   cout << r2 << endl;
  return 0;
}
