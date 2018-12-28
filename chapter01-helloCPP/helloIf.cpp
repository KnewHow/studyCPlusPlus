#include<iostream>
int main () {
  int cnt = 0,val = 0,cntValue;
  if(std :: cin >> val) {
    cntValue = val;
    cnt = 1;
    while(std :: cin >> val) {
      if (cntValue == val) {
        cnt ++;
      } else {
        std :: cout << cntValue << "appear " << cnt << "times" << std :: endl;
        cnt = 1;
        cntValue = val;
      }
    }
    std :: cout << cntValue << "appear " << cnt << "times" << std :: endl;
  }
  return 0;
}
