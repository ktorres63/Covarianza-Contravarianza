#include <iostream>
#include "B.h"
#include "C.h"
#include "A.h"

class X {
public:
  virtual B *foo(B *val) {
    std::cout << "X:foo in B, Parameter B\n";
    return val;
  }
};
