#ifndef AF_FACTORY_CHILD2_H
#define AF_FACTORY_CHILD2_H

#include "af_factory_base.h"

namespace abstract_factory {
	
	class FactoryChildTwo : public FactoryBase {
	public:
		BaseOne* createBaseOne() override;
		BaseTwo* createBaseTwo() override;
		BaseThree* createBaseThree() override;
	};	
	
}

#endif

