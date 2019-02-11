#ifndef SCALE_H
#define SCALE_H

#include<string>


class Scale{
  public:
  std :: string number;
  int count;
  double total;
  bool isSame(Scale s) {
    return this->number == s.number;
  }

  Scale& combine(Scale s) {
    this->count = this->count + s.count;
    this->total = this->total + s.total;
    return *this;
  }
};

#endif