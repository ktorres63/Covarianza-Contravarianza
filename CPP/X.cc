#include <iostream>
#include "B.h"

class X{

    //B* bval = new B();
    public:
        virtual B* foo(B* val){
            std::cout << "X:foo in B, Parameter B\n" << "\n";
            return val;
        }

};
