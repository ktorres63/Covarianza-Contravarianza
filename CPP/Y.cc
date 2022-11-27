#include <iostream>
#include "X.cc"
#include "B.h"
#include "A.h"
#include "C.h"
class Y : public X{
public:
  B *foo(C *val) {
    std::cout << "Y:foo in B, Parameter C\n";
    return val;
  }
};
