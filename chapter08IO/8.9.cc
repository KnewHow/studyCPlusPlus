#include<iostream>
#include<sstream>
#include<string>

using std :: istream;
using std :: istringstream;
using std :: cout;
using std :: endl;
using std :: string;

void print(istream& is) {
  string buf;
  while(is >> buf) {
    cout << buf << endl;
  }
  is.clear();
}
int main() {
  istringstream iss("Hello World");
  print(iss);
  return 0;
}
