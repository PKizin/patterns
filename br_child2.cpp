#include "br_child2.h"
#include "br_child_impl1.h"
#include "br_child_impl2.h"
using namespace bridge;

ChildTwo::ChildTwo(std::string type) {
    if (type == "impl_1") {
        impl = new ChildImplOne();
    }
    if (type == "impl_2") {
        impl = new ChildImplTwo();
    }
}

void ChildTwo::info() {
    if (impl) {
        impl->info2();
    }
}

