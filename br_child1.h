#ifndef BR_CHILD1_H
#define BR_CHILD1_H

#include "br_base.h"
#include <string>

namespace bridge {
    
    class ChildOne : public Base {
    public:
        ChildOne(std::string type);
        void info() override;
    };
    
}

#endif

