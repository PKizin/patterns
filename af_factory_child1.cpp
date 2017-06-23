#include "af_factory_child1.h"
#include "af_child11.h"
#include "af_child21.h"
#include "af_child31.h"
using namespace abstract_factory;

BaseOne* FactoryChildOne::createBaseOne() {
	return new ChildOneBaseOne();
}

BaseTwo* FactoryChildOne::createBaseTwo() {
	return new ChildOneBaseTwo();
}

BaseThree* FactoryChildOne::createBaseThree() {
	return new ChildOneBaseThree();
}

