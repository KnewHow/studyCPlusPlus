#include<iostream>
#include<string>
#include "ScaleData.h"

using std :: cout;
using std :: string;
using std :: cin;
using std :: endl;
using std :: cerr;

void scaleDataDemo() {
  std :: istream& in = cin;
  if(in) {
    ScaleData total(in);
    while(in) {
      ScaleData tmp(in);
      if(tmp.isbn() == total.isbn()) {
        total.combine(tmp);
      } else {
        print(cout, total);
        total = tmp;
      }
    }
  } else {
    cerr << "No data ?" << endl;
  }
}

int main () {
  scaleDataDemo();
  return 0;
}
