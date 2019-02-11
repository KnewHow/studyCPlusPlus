#include<iostream>
#include<vector>
#include<sstream>
#include<fstream>
#include<string>

using std :: string;
using std :: cout;
using std :: endl;
using std :: vector;
using std :: istream;
using std :: istringstream;
using std :: ifstream;

vector<string> read(string filename) {
  ifstream fin(filename);
  vector<string> lines;
  if(fin){
    string line;
    while(getline(fin, line)) {
      lines.push_back(line);
    }
  }
  return lines;
}

void read(istream &is) {
  string buf;
  while(is >> buf) {
    cout << buf << endl;
  }
  is.clear();
}


void read(vector<string> lines) {
  for(const auto line : lines) {
    istringstream iss(line);
    read(iss);
  }
}

int main(int argc, char **argv) {
  string filename(argv[1]);
  vector<string> r = read(filename);
  read(r);
  return 0;
}
