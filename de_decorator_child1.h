#ifndef DE_DECORATOR_CHILD1_H
#define DE_DECORATOR_CHILD1_H

#include "de_decorator_base.h"

namespace decorator {
    
    class DecoratorChildOne : public DecoratorBase {
    public:
        DecoratorChildOne(Base* bas);
        void info() override;
    };
    
}

#endif

