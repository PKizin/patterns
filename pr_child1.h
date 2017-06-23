#ifndef PR_CHILD1_H
#define PR_CHILD1_H

#include "pr_base.h"

namespace prototype {
	
	class ChildOne : public Base {
	public:
		Base* clone() override;
		void info() override;
	};
	
}

#endif

