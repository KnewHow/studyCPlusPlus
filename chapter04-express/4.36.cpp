#include<iostream>

using std :: cout;
using std :: endl;

int main () {
  int a = 3;
  double b = 4.1;
  auto r = static_cast<int>(b) * 3;
  cout << r << endl;
  const int c = 3;
  int *p = const_cast<int*>(&c);
  *p = 4;
  cout << "*p is " << *p << endl;
  cout << "c is " << c << endl;
  return 0;
}
