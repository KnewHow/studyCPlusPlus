#include<iostream>
#include<string>
#include"WindowMgr.h"
#include"Screen.h"

using std :: string;
using std :: cout;
using std :: cin;
using std :: endl;
int main () {
  Screen s1(1,2,'c');
  const Screen s2(1,2,'c');
  s1.display(cout).move(0,0).set('&');
  return 0;
}
