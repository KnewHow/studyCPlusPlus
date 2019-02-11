#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using std :: string;
using std :: vector;
using std :: cout;
using std :: endl;
using std :: ifstream;
using std :: cerr;

vector<string> readWords(string filename) {
  vector<string> words;
  ifstream fin(filename);
  if(fin) {
    string word;
    while(fin >> word) {
       words.push_back(word);
    }
  } else {
    cerr << "ifstream bind file failure";
  }

  return words;
}

void print(vector<string> words) {
  for(const auto w: words) {
    cout << w << endl;
  }
}

int main(int argc, char **argv) {
  string filename(argv[1]);
  auto words = readWords(filename);
  print(words);
  return 0;
}
