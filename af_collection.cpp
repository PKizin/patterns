#include "af_collection.h"
using namespace abstract_factory;

Collection::~Collection() {
	this->clear();
}

void Collection::create(FactoryBase* factory) {
	if (factory) {
		this->clear();
		b1 = factory->createBaseOne();
		b2 = factory->createBaseTwo();
		b3 = factory->createBaseThree();
	}
}

void Collection::clear() {
	if (b1) {
		delete b1;
		b1 = nullptr;
	}
	if (b2) {
		delete b2;
		b2 = nullptr;
	}
	if (b3) {
		delete b3;
		b3 = nullptr;	
	}
}

void Collection::info() {
	if (b1) b1->info();
	if (b2) b2->info();
	if (b3) b3->info();
}

