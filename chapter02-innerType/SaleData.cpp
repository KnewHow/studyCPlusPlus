#include<iostream>
#include "SaleData.h"
int main () {
  Sale_data s1,s2;
  double price;
  std :: cin >> s1.number >> s1.sold_amount >> price;
  s1.revenue = s1.sold_amount * price;
  std :: cin >> s2.number >> s2.sold_amount >> price;
  s2.revenue = s2.sold_amount * price;
  if (s1.number == s2.number) {
    auto totalCnt = s1.sold_amount + s2.sold_amount;
    auto totalRevenue = s1.revenue + s2.revenue;
    std :: cout << s1.number << " " << totalCnt << " " << totalRevenue << " ";
    if (totalCnt != 0) {
      auto averagePrice = totalRevenue  / totalCnt;
      std :: cout << averagePrice << std :: endl;
    }
    return 0;
  } else {
    std :: cerr << "book number must same" << std :: endl;
    return -1;
  }

}
