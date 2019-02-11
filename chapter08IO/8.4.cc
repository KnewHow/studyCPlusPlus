#include<iostream>
#include<fstream>
#include<vector>

using std :: vector;
using std :: string;
using std :: cout;
using std :: ifstream;
using std :: endl;

vector<string> read(string filename) {
  ifstream fin(filename);
  vector<string> v;
  string line;
  while(getline(fin, line)) {
    v.push_back(line);
  }
  return v;
}

void print(vector<string> v) {
  for(auto s : v) {
    cout << s << endl;
  }
}


int main(int argc, char **argv) {
  string fname(argv[1]);
  auto v = read(fname);
  print(v);
  return 0;
}
