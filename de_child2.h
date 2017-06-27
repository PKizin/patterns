#ifndef DE_CHILD2_H
#define DE_CHILD2_H

#include "de_base.h"

namespace decorator {
    
    class ChildTwo : public Base {
    public:
        void info() override;
    };
    
}

#endif

