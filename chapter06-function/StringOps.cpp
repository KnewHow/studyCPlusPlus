#include "StringOps.h"
#include<string>
using std :: string;
bool lengthCompare(const string &s1, const string &s2) {
  return s1.size () > s2.size();
}

string :: size_type sumLength (const string &s1, const string &s2) {
  return s1.size() + s2.size();
}

bool compare(const string &s1, const string &s2, bool (*fp)(const string &s1, const string &s2)) {
  return fp(s1,s2);
}

string :: size_type (*funR())(const string &, const string &){
  return &sumLength;
}
