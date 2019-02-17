#include<iostream>

using std :: cout;
using std :: endl;
int main() {
  auto f = [](const int a, const int b) -> int
           {return a + b;};
  const auto r =f(12,13);
  cout << "r is -> " << r << endl;
  return 0;
}
