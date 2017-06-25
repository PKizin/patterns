#include "br_child_impl1.h"
#include <iostream>
using namespace bridge;

void ChildImplOne::info1() {
    std::cout << "method #1 of implementation #1 (bridge)\n";
}

void ChildImplOne::info2() {
    std::cout << "method #2 of implementation #1 (bridge)\n";
}

void ChildImplOne::info3() {
    std::cout << "method #3 of implementation #1 (bridge)\n";
}

