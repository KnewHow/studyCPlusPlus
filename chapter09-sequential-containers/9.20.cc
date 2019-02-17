#include<iostream>
#include<list>
#include<deque>

using std :: list;
using std :: deque;
using std :: cout;
using std :: endl;

void print(deque<int> d) {
  for(const auto e : d) {
    cout << e << endl;
  }
}


int main () {
  list<int> l{1,2,3,4};
  deque<int> odd;
  deque<int> even;
  for (const auto e : l) {
    if (e % 2 == 0) {
      even.push_back(e);
    } else {
      odd.push_back(e);
    }
  }

  print(odd);
  print(even);
  return 0;
}
