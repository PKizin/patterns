#include "br_child3.h"
#include "br_child_impl1.h"
#include "br_child_impl2.h"
using namespace bridge;

ChildThree::ChildThree(std::string type) {
    if (type == "impl_1") {
        impl = new ChildImplOne();
    }
    if (type == "impl_2") {
        impl = new ChildImplTwo();
    }
}

void ChildThree::info() {
    if (impl) {
        impl->info3();
    }
}

