#ifndef PR_CHILD2_H
#define PR_CHILD2_H

#include "pr_base.h"

namespace prototype {
    
    class ChildTwo : public Base {
    public:
        Base* clone() override;
        void info() override;
    };
    
}

#endif

