#ifndef AF_CHILD21_H
#define AF_CHILD21_H

#include "af_base2.h"

namespace abstract_factory {
    
    class ChildOneBaseTwo : public BaseTwo {
    public:
        void info() override;
    };
    
}

#endif

