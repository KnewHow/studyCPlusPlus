#include<iostream>
#include<string>
#include"StringOps.h"
#define NDEBUG
using std :: cout;
using std :: endl;
using std :: string;

int main(){
  string s1{"123"};
  string s2{"45"};
  auto r1 = lengthCompare(s1,s2);
  auto r2 = sumLength(s1,s2);
  auto r3 = compare("how", "Knew", lengthCompare);
  auto r4 = funR();
  cout << "r1 is " << r1 << endl;
  cout << "r2 is " << r2 << endl;
  cout << "r3 is " << r3 << endl;
  cout << "r4 is " << r4("How","Knew") << endl;
  return 0;
}
