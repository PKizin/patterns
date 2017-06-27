#include "de_decorator_child1.h"
#include <iostream>
using namespace decorator;

DecoratorChildOne::DecoratorChildOne(Base* bas) :
    DecoratorBase(bas)
{
}

void DecoratorChildOne::info() {
    std::cout << "decorated #1 ";
    DecoratorBase::info();
}

