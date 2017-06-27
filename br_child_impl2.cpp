#include "br_child_impl2.h"
#include <iostream>
using namespace bridge;

void ChildImplTwo::info1() {
    std::cout << "method #1 of implementation #2 (bridge)\n";
}

void ChildImplTwo::info2() {
    std::cout << "method #2 of implementation #2 (bridge)\n";
}

void ChildImplTwo::info3() {
    std::cout << "method #3 of implementation #2 (bridge)\n\n";
}

