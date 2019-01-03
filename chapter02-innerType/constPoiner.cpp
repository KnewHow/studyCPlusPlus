#include<iostream>
int main () {
  int i = 12;
  int j = 13;
  const int *p = &i;
  p = &j;
  return 0;
}
