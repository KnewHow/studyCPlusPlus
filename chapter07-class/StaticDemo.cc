#include<iostream>
#include<string>
#include "Static.h"

using std :: cout;
using std :: endl;
using std :: string;

int main () {
  string r1 = Person::getName();
  cout << "r1 is ->" << r1 << endl;
  return 0;
}
