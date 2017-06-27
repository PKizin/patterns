#ifndef DE_CHILD1_H
#define DE_CHILD1_H

#include "de_base.h"

namespace decorator {
    
    class ChildOne : public Base {
    public:
        void info() override;
    };
    
}

#endif

