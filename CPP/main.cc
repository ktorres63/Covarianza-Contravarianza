#include <iostream>
#include "Y.cc"

#include "B.h"
#include "C.h"
#include "A.h"


int main (){

    X* valX = new X();
    Y* valY = new Y();

    A* valA = new A();
    B* valB = new B();
    C* valC = new C();

    valX->foo(valB);
    valY->foo(valB);

    std::cout << "Hola, mundo\n";
    return 0;
}
