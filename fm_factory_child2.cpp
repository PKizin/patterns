#include "fm_factory_child2.h"
#include "fm_child2.h"
using namespace factory_method;

Base* FactoryChildTwo::create() {
	return new ChildTwo();
}

