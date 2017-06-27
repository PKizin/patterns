#ifndef DE_DECORATOR_BASE_H
#define DE_DECORATOR_BASE_H

#include "de_base.h"

namespace decorator {
    
    class DecoratorBase : public Base {
    public:
        DecoratorBase(Base* bas);
        ~DecoratorBase() override;
        void info() override;
    private:
        Base* base = nullptr;
    };
    
}

#endif

