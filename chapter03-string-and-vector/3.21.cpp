#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using std :: string;
using std :: vector;
using std :: cout;
using std :: endl;

int main () {
  string s = "some thing";
  for(auto e = s.begin(); e != s.end() && !isspace(*e); e++) {
    *e = toupper(*e);
  }
  cout << "result is ->" << s << endl;
  return 0;
}
