#ifndef SCALEDATA_H
#define SCALEDATA_H
#include<string>
#include<iostream>

struct ScaleData;
std :: istream &read(std :: istream& is, ScaleData& item);

struct ScaleData{
  ScaleData() = default;
  ScaleData(const std :: string& no): bookNo(no){}
  ScaleData(const std :: string& no, const unsigned amout, const double price): bookNo(no), unitSold(amout), revenue(amout * price){}
  ScaleData(std :: istream& in) {
    read(in,*this);
  }
  std :: string bookNo;

  unsigned unitSold = 0;

  double revenue = 0.0;

  std :: string isbn() const {
    return this->bookNo;
  };

  ScaleData& combine(const ScaleData& rhs) {
    unitSold += rhs.unitSold;
    revenue += rhs.revenue;
    return *this;
  }

  double avgPrice() const {
    if(unitSold != 0) {
      return revenue / unitSold;
    } else {
      return 0.0;
    }
  }
};

ScaleData add(const ScaleData& s1, const ScaleData& s2) {
  ScaleData sum = s1;
  sum.combine(s1);
  return sum;
}

std :: ostream &print(std :: ostream& os, const ScaleData& item) {
  os << item.isbn() << " " << item.unitSold << " " << item.revenue << " " << item.avgPrice();
  return os;
}

std :: istream &read(std :: istream& is, ScaleData& item) {
  double price = 0.0;
  is >> item.bookNo >> item.unitSold >> price;
  item.revenue = item.unitSold * price;
  return is;
}
#endif
