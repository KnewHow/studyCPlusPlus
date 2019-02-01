#include<iostream>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: istream;

istream& same(istream& in) {
  char c;
  auto oldState = in.rdstate();
  while(in >> c) {
    cout << c << endl;
  }
  in.setstate(oldState);
  return in;
}

int main (){
  same(cin);
  return 0;
}
