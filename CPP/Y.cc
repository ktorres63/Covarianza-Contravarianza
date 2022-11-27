#include <iostream>
#include "X.cc"
#include "B.h"
#include "A.h"
#include "C.h"
class Y : public X{
public:
  C *foo(A *val) {
    std::cout << "Y:foo in C, Parameter A\n";
    return new C();
  }
};
