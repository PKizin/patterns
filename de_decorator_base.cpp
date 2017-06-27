#include "de_decorator_base.h"
using namespace decorator;

DecoratorBase::DecoratorBase(Base* bas) :
    base(bas)
{    
}

DecoratorBase::~DecoratorBase() {
    if (base) {
        delete base;
        base = nullptr;
    }
}

void DecoratorBase::info() {
    if (base) {
        base->info();
    }
}

