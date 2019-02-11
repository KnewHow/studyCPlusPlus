#include<iostream>
#include<fstream>
#include "Scale.h"

using std :: string;
using std :: ifstream;
using std :: istream;
using std :: cout;
using std :: endl;
using std :: cerr;

istream& read(istream &in, Scale &s) {
  double price;
  in >> s.number >> s.count >> price;
  s.total = price * s.count;
  return in;
}

void print(const Scale s) {
  cout  << s.number << " " << s.count << " " << s.total << " " << (s.total / s.count) << endl;
}


void process(string filename) {
  ifstream fin(filename);
  if(fin) {
    Scale total;
    if(read(fin, total)) {
      Scale tmp;
      while(read(fin,tmp)) {
        if(total.isSame(tmp)) {
          total.combine(tmp);
        } else {
          print(total);
          total = tmp;
        }
      }
      print(total);
    }
  } else {
    cerr << "bind file input stream to ->" << filename << "failure" << endl;
  }
}

int main(int argc, char **argv) {
  string filename(argv[1]);
  process(filename);
  return 0;
}
