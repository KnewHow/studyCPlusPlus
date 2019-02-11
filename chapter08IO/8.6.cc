#include<iostream>
#include<fstream>
#include "Scale.h"

using std :: string;
using std :: ifstream;
using std :: ofstream;
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

void print(const Scale s, string filename) {
  ofstream fout;
  fout.open(filename, ofstream::app);
  fout  << s.number << " " << s.count << " " << s.total << " " << (s.total / s.count) << endl;
}


void process(string filename, string resultname) {
  ifstream fin(filename);
  if(fin) {
    Scale total;
    if(read(fin, total)) {
      Scale tmp;
      while(read(fin,tmp)) {
        if(total.isSame(tmp)) {
          total.combine(tmp);
        } else {
          print(total,resultname);
          total = tmp;
        }
      }
      print(total,resultname);
    }
  } else {
    cerr << "bind file input stream to ->" << filename << "failure" << endl;
  }
}

int main(int argc, char **argv) {
  string filename(argv[1]);
  string resultname(argv[2]);
  process(filename, resultname);
  return 0;
}
