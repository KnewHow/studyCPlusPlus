#include<iostream>
int main () {
  const int i = 12, &r = i;
  int b = 13;
  auto d = i;
  auto p = &i;
  p = &b;
  // *p = 13;
  auto &ri = i;
  // ri = 13;
  d = 15;
  std :: cout << "p is " << *p << std :: endl;
  std :: cout << "ri is " << ri << std :: endl;
  return 0;
}
