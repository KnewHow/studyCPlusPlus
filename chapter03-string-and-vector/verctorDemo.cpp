#include<iostream>
#include<string>
#include<vector>

using std :: cout;
using std :: endl;
using std :: string;
using std :: vector;

int main () {
  vector<string> sv(5,"hi");
  sv.push_back("how");
  auto size = sv.size();
  cout << "size is " << size << endl;
  for (auto e : sv) {
    cout << e << endl;
  }
  vector<int> iv{10};
  // iv[0] = 10;
  return 0;
}
