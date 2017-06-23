#include "pr_child1.h"
#include <iostream>
using namespace prototype;

Base* ChildOne::clone() {
    return new ChildOne(*this);
}

void ChildOne::info() {
    std::cout << "child #1 (prototype)\n";
}

