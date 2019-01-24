#include<iostream>
#include<vector>
#include<string>

using std :: string;
using std :: cout;
using std :: endl;

int add(int x, int y) {
	return x + y;
}
const string& shorterString(const string &s1, const string &s2) {
  return s1.size() < s2.size() ? s1 : s2;
} 
int main () {
	int sum = add(10,3);
	cout << sum << endl;
  string s1 = "hello";
  string s2 = "world1";
  auto r = shorterString(s1,s2);
  cout << r << endl;
	return 0;
}
