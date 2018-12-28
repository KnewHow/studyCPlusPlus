#include<iostream>
#include "Sales_item.h"
int main () {
  Sales_item book,sum;
  if(std :: cin >> book) {
    sum = book;
    while(std :: cin >> book) {
      if (sum.isbn() == book.isbn()) {
        sum += book;
      } else {
        std :: cout << "sum book is" << sum << std :: endl;
        sum = book;
      }
    }
  } else {
    std :: cout << "No inputs" << std :: endl;
  }

  std :: cout << "sum book is" << sum << std :: endl;

  return 0;
}
