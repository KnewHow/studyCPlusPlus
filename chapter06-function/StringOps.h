#ifndef STRINGOPS
#define STRINGOPS
#include<string>
using std :: string;

bool lengthCompare(const string &s1, const string &s2);
string :: size_type sumLength(const string &s1, const string &s2);

bool compare(const string &s1, const string &s2, bool (*fp)(const string &s1, const string &s2));

string :: size_type (*funR())(const string &, const string &);
#endif
