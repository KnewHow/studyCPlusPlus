#include<iostream>
#include<list>
#include<forward_list>
#include<vector>

using std :: list;
using std :: forward_list;
using std :: vector;
using std :: advance;
using std :: cout;
using std :: endl;

void deleteEvenAndCopyOddVector(vector<int>& v) {
  auto begin = v.cbegin();
  while(begin != v.end()) {
    if(*begin % 2 == 0) {
      begin = v.erase(begin);
    } else {
      begin = v.insert(begin, *begin);
      begin+=2;
    }
  }
}

void deleteEvenAndCopyOddList(list<int>& l) {
  auto begin = l.cbegin();
  while(begin != l.end()) {
    if(*begin % 2 == 0) {
      begin = l.erase(begin);
    } else {
      begin = l.insert(begin, *begin);
      advance(begin,2);
    }
  }
}

void deleteEvenAndCopyOddForwardList(forward_list<int>& fl) {
  auto beforeBegin = fl.before_begin();
  auto begin =  fl.begin();
  while(begin != fl.end()) {
    if(*begin % 2 == 0) {
      begin = fl.erase_after(beforeBegin);
    }else {
      begin = fl.insert_after(begin, *begin);
      beforeBegin = begin;
      begin++;
    }
  }
}

int main() {
  list<int> l{0,1,2,3,4,5,6,7,8,9};
  forward_list<int> fl{0,1,2,3,4,5,6,7,8,9};
  deleteEvenAndCopyOddList(l);
  for(const auto e : l) {
    cout << e << endl;
  }
  cout << "-----------------" << endl;
  deleteEvenAndCopyOddForwardList(fl);
  for(const auto e : fl) {
    cout << e << endl;
  }
  return 0;
}
