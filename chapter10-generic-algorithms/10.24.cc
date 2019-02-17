#include<vector>
#include<iostream>
#include<string>
#include<algorithm>
#include<functional>

using std :: vector;
using std :: string;
using std :: find_if;
using std :: cout;
using std :: endl;
using namespace std :: placeholders;

bool checkSize(const string &s, const string :: size_type sz) {
  return s.size() <= sz;
}

int main() {
  string s = "123456";
  vector<int> v{1,8,3,4,5,6,7};
  auto r1 = find_if(v.begin(), v.end(), bind(checkSize,s,_1));
  cout << "r1 is -> " << *r1 << endl;
  auto r2 = find_if(v.begin(), v.end(), [s](int i) -> bool{
                                          return i >= s.size();
                                        });
  cout << "r2 is -> " << *r2 << endl;
  return 0;
}
