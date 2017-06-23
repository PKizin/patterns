#ifndef FM_FACTORY_BASE_H
#define FM_FACTORY_BASE_H

#include "fm_base.h"

namespace factory_method {
    
    class FactoryBase {
    public:
        virtual ~FactoryBase();
        virtual Base* create() = 0;
    };
    
}

#endif

