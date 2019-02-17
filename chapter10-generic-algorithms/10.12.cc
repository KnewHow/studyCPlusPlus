#include<string>
#include<vector>
#include<algorithm>
#include<iostream>
#include <sstream>

using std :: string;
using std :: vector;
using std :: sort;
using std :: cout;
using std :: endl;

class Book{
  public:
  Book(const string number, const double price): number(number), price(price){}
  string getNumber() {
    return this->number;
  }
  double getPrice() {
    return this->price;
  }
  string myString() {
    std::ostringstream ss;
    ss << "number is ->" << this->number <<  "price is -> " << price;
    return ss.str();
  }
  private:
  string number;
  double price;
};

bool compare2(Book& b1, Book& b2) {
  return b1.getNumber() < b2.getNumber();
}

void compare(vector<Book>& books) {
  sort(books.begin(), books.end(), compare2);
}

int main() {
  vector<Book> v{Book("Program in Scala",120.0), Book("C++ Primer",114.5),Book("Thinking in Java", 134)};
  compare(v);
  for(auto e: v) {
    cout << e.myString() << endl;
  }
  return 0;
}
