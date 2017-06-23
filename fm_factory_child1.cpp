#include "fm_factory_child1.h"
#include "fm_child1.h"
using namespace factory_method;

Base* FactoryChildOne::create() {
	return new ChildOne();
}

