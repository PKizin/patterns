#include "fm_factory_child3.h"
#include "fm_child3.h"
using namespace factory_method;

Base* FactoryChildThree::create() {
	return new ChildThree();
}

