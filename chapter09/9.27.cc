#include<iostream>
#include<forward_list>

using std :: forward_list;
using std :: cout;
using std :: endl;

int main() {
  forward_list<int> fl{1,2,3,4,5,6};
  auto bf = fl.before_begin();
  auto curr = fl.begin();
  while(curr != fl.end()) {
    if(*curr % 2 !=0) {
      curr = fl.erase_after(bf);
    } else {
      bf = curr;
      ++curr;
    }
  }
  for(const auto e : fl) {
    cout << e << endl;
  }
  return 0;
}
