#include<iostream>
int main () {
  const int i = 12, &ci = i;
  decltype(i) p = 13;
  decltype(ci) cj = 14;
  // cj = 16;
  std :: cout << "p is " << p << std :: endl;
  std :: cout << "cj is " << cj << std :: endl;
  return 0;
}
