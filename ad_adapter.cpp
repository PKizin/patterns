#include "ad_adapter.h"
#include "ad_base.h"
#include <iostream>
using namespace adapter;

Adapter::Adapter(Base* bas) :
	base(bas)
{
}

Adapter::~Adapter() {
	if (base) {
		delete base;
		base = nullptr;
	}
}

void Adapter::info() {
	if (base) {
		std::cout << "adapted ";
		base->info();
	}
}

