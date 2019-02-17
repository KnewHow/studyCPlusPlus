#include<iostream>

using std :: cout;
using std :: endl;

int function(const int a, const int b) {
  auto f = [a](const int s) -> int {
             return a + s;
           };
  return f(b);
}

int main() {
  auto r = function(12,13);
  cout << "r is -> " << r << endl;
}
