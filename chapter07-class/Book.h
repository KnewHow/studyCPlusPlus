#ifndef BOOK_H
#define BOOK_H
#include<string>
#include<iostream>
using std :: string;
using std :: cout;
using std :: endl;

class Book {
  public:
  Book(string no, string name, int page): number(no), name(name), page(page){
    cout << "Book constructor with three parameter" <<endl;
  }

  Book(string no): Book(no, "",0){
     cout << "Book constructor with one parameter -> no" <<endl;
  }

  Book(): Book(""){
     cout << "Book constructor with zero parameter" <<endl;
  }

  private:
  string number;
  string name;
  int page;
};
#endif
