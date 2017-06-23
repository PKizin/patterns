#ifndef AF_CHILD12_H
#define AF_CHILD12_H

#include "af_base1.h"

namespace abstract_factory {
    
    class ChildTwoBaseOne : public BaseOne {
    public:
        void info() override;
    };
    
}

#endif

