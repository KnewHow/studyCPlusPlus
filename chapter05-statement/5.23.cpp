#include<iostream>
#include<stdexcept>

using std :: cout;
using std :: endl;
using std :: runtime_error;

double division(int a, int b) {
  if (b ==0) {
    throw runtime_error("divisor should not be  zero");
  } else {
    return (a * 1.0 / b);
  }

}
int main () {
  try {
    auto r = division(5,0);
    cout << "result is " << r << endl;
    return 0;
  } catch(runtime_error err) {
    cout << "execute division took error ,error message is:" << err.what() << endl;
    return 0;
  }

}
