#include<iostream>
int main () {
  const int i = 12;
  auto p = &i;
  auto &r = i;
  // r = 13;
  std :: cout << "*p is " << *p << std :: endl;
  return 0;
}
