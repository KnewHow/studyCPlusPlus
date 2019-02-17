#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
#include<string>

using std :: vector;
using std :: list;
using std :: count;
using std :: string;
using std :: cout;
using std :: endl;

int countVector(const vector<int> v, const int key) {
  return count(v.cbegin(), v.cend(),key);
}

int countList(const list<string> l, const string key) {
  return count(l.cbegin(), l.cend(), key);
}

int main() {
  vector<int> v{1,2,3,1,3,4,1};
  list<string> l{"hello", "world", "Scala", "Java", "Cpp"};
  auto r1 = countVector(v, 1);
  cout << "r1 is -> " << r1 << endl;
  auto r2 = countList(l, "Cpp");
  cout << "r2 is -> " << r2 << endl;
  return 0;
}
