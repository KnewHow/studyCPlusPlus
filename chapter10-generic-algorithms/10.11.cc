#include<vector>
#include<string>
#include<algorithm>
#include<iostream>

using std :: string;
using std :: vector;
using std :: sort;
using std :: unique;
using std :: stable_sort;
using std :: cout;
using std :: endl;

void elimDups(vector<string>& v) {
  sort(v.begin(), v.end());
  auto repeat_iterator = unique(v.begin(), v.end());
  v.erase(repeat_iterator, v.end());
}

bool isShorter(const string& s1, const string &s2) {
  return s1.size() < s2.size();
}

int main() {
  vector<string> v{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
  elimDups(v);
  stable_sort(v.begin(), v.end(), isShorter);
  for(const auto e : v) {
    cout << e << endl;
  }
  return 0;
}
