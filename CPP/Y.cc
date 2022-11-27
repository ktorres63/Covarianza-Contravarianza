#include <iostream>
#include "X.cc"
#include "B.h"
#include "A.h"
#include "C.h"
class Y : public X{
public:
  A *foo(B *val) {
    std::cout << "Y:foo in A, Parameter B\n";
    return new A();
  }
};
