#include<iostream>
#include<string>
#include<istream>
#include<iterator>
#include <algorithm>
#include <sstream>

using std :: istream_iterator;
using std :: string;
using std :: cout;
using std :: endl;
using std :: cin;

class Book{
  public:
  friend std::istream& operator>>(std::istream&,Book&);
  Book(std :: istream& is) {
    is >> *this;
  }
  Book() = default;
  string name;
  double price;
  string myString() {
     std::ostringstream ss;
     ss << "number is ->" << this->name <<  "price is -> " << price;
     return ss.str();
  }
};

std::istream& operator>>(std::istream& in, Book& b){
  in >> b.name >> b.price;
  return in;
}

int main() {
  istream_iterator<Book> bookIn(cin), eof;
  while(bookIn != eof) {
    Book b = *bookIn++;
    cout << b.myString() << endl;
  }
  return 0;
}
