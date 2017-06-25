#ifndef BR_CHILD3_H
#define BR_CHILD3_H

#include "br_base.h"
#include <string>

namespace bridge {
    
    class ChildThree : public Base {
    public:
        ChildThree(std::string type);
        void info() override;
    };
    
}

#endif

