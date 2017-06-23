#ifndef AF_COLLECTION_H
#define AF_COLLECTION_H

#include "af_factory_base.h"
#include "af_base1.h"
#include "af_base2.h"
#include "af_base3.h"

namespace abstract_factory {
    
    class Collection {
    public:
        ~Collection();
        void create(FactoryBase* factory);
        void clear();
        void info();
    private:
        BaseOne* b1 = nullptr;
        BaseTwo* b2 = nullptr;
        BaseThree* b3 = nullptr;
    };
    
}

#endif

