#include <iostream>
#include "X.cc"
#include "B.h"
class Y : public X{
        //B * bval = new B();
        public:
        B* foo(B* val){
            std::cout << "Y:foo in B, Parameter B\n";
            return val;
        }
};
