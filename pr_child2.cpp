#include "pr_child2.h"
#include <iostream>
using namespace prototype;

Base* ChildTwo::clone() {
    return new ChildTwo(*this);
}

void ChildTwo::info() {
    std::cout << "child #2 (prototype)\n";
}

