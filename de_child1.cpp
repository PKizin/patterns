#include "de_child1.h"
#include <iostream>
using namespace decorator;

void ChildOne::info() {
    std::cout << "child #1 (decorator)\n";
}

