#ifndef FM_CHILD1_H
#define FM_CHILD1_H

#include "fm_base.h"

namespace factory_method {
	
	class ChildOne : public Base {
	public:
		void info() override;
	};
	
}

#endif

