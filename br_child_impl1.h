#ifndef BR_CHILD_IMPL1_H
#define BR_CHILD_IMPL1_H

#include "br_base_impl.h"

namespace bridge {
	
	class ChildImplOne : public BaseImpl {
	public:
		void info1() override;
		void info2() override;
		void info3() override;
	}; 
	
}

#endif

