#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using std :: vector;
using std :: string;
using std :: cout;
using std :: endl;
using std :: count_if;

int clc(vector<string> words, const string :: size_type sz) {
  return count_if(words.begin(), words.end(), [=](const string &s)-> bool{
                                         return s.size() >= sz;
                                       });
}

int main() {
  vector<string> words{"Scala", "Kotlin", "C Plus Plus", "Go", "C", "Java", "Elisp", "JavaScript"};
  auto r = clc(words, 6);
  cout << "r is -> " << r << endl;
}
