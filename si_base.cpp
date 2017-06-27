#include "si_base.h"
#include <iostream>
using namespace singleton;

Base* Base::instance() {
    static Base inst;
    return &inst;
}

void Base::info() {
    std::cout << "base (singleton)\n";
}

