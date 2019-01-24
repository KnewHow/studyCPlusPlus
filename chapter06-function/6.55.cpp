#include<iostream>
#include<vector>

using std :: cout;
using std :: vector;
using std :: endl;

int add (int a, int b) {
  return a + b;
}

int multip(int a, int b) {
  return a * b;
}

int minus(int a, int b) {
  return a - b;
}

int division(int a, int b) {
  return a / b;
}

int main () {
  vector<int(*)(int,int)> v{&add,&multip, &minus,&division};
  int a = 6;
  int b = 2;
  for(auto e: v) {
    cout << "op result is" << e(a,b) << endl;
  }
  return 0;
}
