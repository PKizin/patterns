#ifndef BR_CHILD_IMPL2_H
#define BR_CHILD_IMPL2_H

#include "br_base_impl.h"

namespace bridge {
	
	class ChildImplTwo : public BaseImpl {
	public:
		void info1() override;
		void info2() override;
		void info3() override;
	}; 
	
}

#endif

