#include "de_decorator_child2.h"
#include <iostream>
using namespace decorator;

DecoratorChildTwo::DecoratorChildTwo(Base* bas) :
    DecoratorBase(bas)
{
}

void DecoratorChildTwo::info() {
    std::cout << "decorated #2 ";
    DecoratorBase::info();
}

