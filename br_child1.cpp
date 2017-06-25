#include "br_child1.h"
#include "br_child_impl1.h"
#include "br_child_impl2.h"
using namespace bridge;

ChildOne::ChildOne(std::string type) {
	if (type == "impl_1") {
		impl = new ChildImplOne();
	}
	if (type == "impl_2") {
		impl = new ChildImplTwo();
	}
}

void ChildOne::info() {
	if (impl) {
		impl->info1();
	}
}

