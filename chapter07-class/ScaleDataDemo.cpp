#include<iostream>
#include<string>
#include "ScaleData.h"

using std :: cout;
using std :: string;
using std :: cin;
using std :: endl;
using std :: cerr;

void scaleDataDemo() {
  ScaleData total;
  if(read(cin, total)) {
    ScaleData tmp;
    while(read(cin, tmp)) {
      if(tmp.isbn() == total.isbn()) {
        total.combine(tmp);
      } else {
        cout << "book number is ->" << total.bookNo <<" units sold is ->"<< total.unitSold << " average price is ->" << total.revenue / total.unitSold << endl;
        total = tmp;
      }
    }
    print(cout, total);
  } else {
    cerr << "No data ?" << endl;
  }
}

int main () {
  scaleDataDemo();
  return 0;
}
