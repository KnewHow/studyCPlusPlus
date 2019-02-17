#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using std :: vector;
using std :: string;
using std :: stable_partition;
using std :: cout;
using std :: endl;

vector<string> :: iterator filter(vector<string>& words, string :: size_type sz) {
  return stable_partition(words.begin(), words.end(),[sz](const string& s) -> bool {
                                         return s.size() >= sz;
                                       });
}

int main() {
  vector<string> words{"Scala", "Kotlin", "C Plus Plus", "Go", "C", "Java", "Elisp", "JavaScript"};
  auto r = filter(words, 6);
  auto begin = words.begin();
  while(begin != r) {
    cout << *begin << endl;
    begin ++;
  }
  return 0;
}
