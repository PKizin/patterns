#ifndef PR_CHILD3_H
#define PR_CHILD3_H

#include "pr_base.h"

namespace prototype {
	
	class ChildThree : public Base {
	public:
		Base* clone() override;
		void info() override;
	};
	
}

#endif

