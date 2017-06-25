#include "br_base.h"
#include "br_base_impl.h"
using namespace bridge;

Base::Base() : 
    impl(nullptr) 
{
}

Base::Base(BaseImpl* imp) : 
    impl(imp) 
{
}

Base::~Base() {
    if (impl) {
        delete impl;
        impl = nullptr;
    }
}



