#include<iostream>
#include<forward_list>
#include<string>

using std :: string;
using std :: forward_list;
using std :: cout;
using std :: endl;

void findAndInsert(forward_list<string> &fl, string key, string value) {
  auto bb = fl.before_begin();
  auto b = fl.begin();
  auto e = fl.end();
  while(b != e) {
    if(*b == key) {
      fl.insert_after(b, value);
      return;
    } else {
      bb = b;
      ++b;
    }

  }
  fl.insert_after(bb, value);
}

int main() {
  forward_list<string> fl{"Hello","World","Java", "Scala"};
  string key = "World";
  string value = "CPP";
  findAndInsert(fl, key, value);
  for(const auto e : fl) {
    cout << e << endl;
  }
  return 0;
}
