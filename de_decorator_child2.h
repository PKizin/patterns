#ifndef DE_DECORATOR_CHILD2_H
#define DE_DECORATOR_CHILD2_H

#include "de_decorator_base.h"

namespace decorator {
    
    class DecoratorChildTwo : public DecoratorBase {
    public:
        DecoratorChildTwo(Base* bas);
        void info() override;
    };
    
}

#endif

