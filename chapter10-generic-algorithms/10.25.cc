#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
#include<functional>

using std :: vector;
using std :: string;
using std :: cout;
using std :: endl;
using std :: partition;
using std :: for_each;
using namespace std :: placeholders;

bool checkSize(const string &s, const string :: size_type sz) {
  return s.size() >= sz;
}

vector<string> :: iterator filter(vector<string>& v, const string :: size_type sz) {
  return partition(v.begin(), v.end(), bind(checkSize,_1,sz));
}

vector<string> :: iterator filter2(vector<string>& v, const string :: size_type sz) {
  return partition(v.begin(), v.end(), [sz](const string &s){
                                         return s.size() >= sz;
                                       });
}


int main() {
  vector<string> words{"Scala", "Kotlin", "C Plus Plus", "Go", "C", "Java", "Elisp", "JavaScript"};
  auto r = filter(words, 6);
  for_each(words.begin(), r, [](const string &s){
                                cout << s << endl;
                              });
  return 0;
}
