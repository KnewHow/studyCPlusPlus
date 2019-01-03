#include<iostream>
int main () {
  int i = 12, *p = &i;
  *p = 13;
  std :: cout << "i is " << i << std :: endl;
  int v = 14;
  p = &v;
  std :: cout << "*p is " << *p << std :: endl;
  return 0;
}
