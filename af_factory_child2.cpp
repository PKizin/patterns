#include "af_factory_child2.h"
#include "af_child12.h"
#include "af_child22.h"
#include "af_child32.h"
using namespace abstract_factory;

BaseOne* FactoryChildTwo::createBaseOne() {
    return new ChildTwoBaseOne();
}

BaseTwo* FactoryChildTwo::createBaseTwo() {
    return new ChildTwoBaseTwo();
}

BaseThree* FactoryChildTwo::createBaseThree() {
    return new ChildTwoBaseThree();
}

