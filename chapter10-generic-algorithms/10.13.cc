#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using std :: vector;
using std :: string;
using std :: partition;
using std :: cout;
using std :: endl;

bool compare(string &s) {
  return s.size() <= 5;
}

vector<string>::iterator partitionDemo(vector<string> &words) {
  return partition(words.begin(), words.end(), compare);
}

int main() {
  vector<string> words{"Google","Scala","Haskell","Java"};
  auto end = partitionDemo(words);
  auto begin = words.begin();
  while(begin != end) {
    cout << *begin << endl;
    begin++;
  }
  return 0;
}
