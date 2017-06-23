#ifndef AF_CHILD32_H
#define AF_CHILD32_H

#include "af_base3.h"

namespace abstract_factory {
	
	class ChildTwoBaseThree : public BaseThree {
	public:
		void info() override;
	};
	
}

#endif

