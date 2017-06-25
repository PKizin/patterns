#ifndef BR_CHILD2_H
#define BR_CHILD2_H

#include "br_base.h"
#include <string>

namespace bridge {
    
    class ChildTwo : public Base {
    public:
        ChildTwo(std::string type);
        void info() override;
    };
    
}

#endif

