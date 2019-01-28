#ifndef XY_H
#define XY_H

class Y;

class X {
    Y* y = nullptr;
};

class Y {
    X x;
};

#endif
