#include<iostream>

using std :: cout;
using std :: endl;

void function() {
  int i = 10;
  auto f = [&i]() -> bool {
             while(i > 0) {
               --i;
             }
             return true;
           };
  auto r = f();
  cout << "is is -> " << i << " and r is -> " << r << endl;
}

int main() {
  function();
  return 0;
}
