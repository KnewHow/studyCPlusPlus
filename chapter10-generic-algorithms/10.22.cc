#include<iostream>
#include<functional>
#include<string>
#include<vector>
#include<algorithm>

using std :: cout;
using std :: endl;
using std :: vector;
using std :: string;
using std :: count_if;
using namespace std :: placeholders;

bool filterSize(const string& s, string :: size_type sz) {
  return s.size() >= sz;
}



int main() {
  auto check6 = bind(filterSize, _1, 6);
  vector<string> words{"Scala", "Kotlin", "C Plus Plus", "Go", "C", "Java", "Elisp", "JavaScript"};
  auto r= count_if(words.begin(),words.end(), check6);
  cout << "r is -> " << r << endl;
  return 0;
}
