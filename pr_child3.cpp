#include "pr_child3.h"
#include <iostream>
using namespace prototype;

Base* ChildThree::clone() {
	return new ChildThree(*this);
}

void ChildThree::info() {
	std::cout << "child #3 (prototype)\n\n";
}

