#include<iostream>

using std :: cout;
using std :: endl;
int sum(int a, int b) {
  return a + b;
}

int sum2(int a, int b = 12) {
  return a + b;
}
int main () {
  auto r1 = sum(12,13);
  auto r2 = sum2(12);
  cout << "r1 " << r1 << endl;
  cout << "r2 " << r2 << endl;
  return 0;
}
