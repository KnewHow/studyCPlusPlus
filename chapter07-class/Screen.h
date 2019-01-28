#ifndef SCREEN_H
#define SCREEN_H
#include<iostream>
#include<string>

class Screen{
  public:

  using pos = std :: string :: size_type;

  Screen() = default;

  Screen(pos ht, pos wd, char c): height(ht), width(wd), content(ht*wd, c){}

  inline char get() const {
    return content[custor];
  }

  inline char get(pos r, pos c) const {
    pos row = r * width;
    return content[row + c];
  }

  inline Screen& set(char c) {
    this->content[this->custor] = c;
    return *this;
  }

  inline Screen& set(pos r, pos col, char c) {
    this->content[r * this->width + col] = c;
    return *this;
  }

  Screen& move(pos r, pos c) {
    pos row = r * width;
    custor = row + c;
    return *this;
  }

  const Screen& displayConst(std :: ostream &os) {
    this->doDisplay(os);
    return *this;
  }

  Screen& display(std :: ostream &os) {
    this->doDisplay(os);
    return *this;
  }

  private:

  mutable pos access_counter = 0;
  pos custor = 0;
  pos width = 0;
  pos height = 0;
  std :: string content;

  void access () const {
    ++access_counter;
  }

  void doDisplay(std :: ostream& os) {
    os << this->content;
  }
};
#endif