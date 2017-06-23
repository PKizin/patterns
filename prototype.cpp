#include "prototype.h"
#include <iostream>
using namespace prototype;
using std::cout;

Base::~Base() {}

Base* ChildOne::clone() {
	return new ChildOne(*this);
}

void ChildOne::info() {
	cout << "child one (prototype)\n";
}

Base* ChildTwo::clone() {
	return new ChildTwo(*this);
}

void ChildTwo::info() {
	cout << "child two (prototype)\n";
}

Base* ChildThree::clone() {
	return new ChildThree(*this);
}

void ChildThree::info() {
	cout << "child three (prototype)\n\n";
}
