#ifndef AF_FACTORY_CHILD1_H
#define AF_FACTORY_CHILD1_H

#include "af_factory_base.h"

namespace abstract_factory {
	
	class FactoryChildOne : public FactoryBase {
	public:
		BaseOne* createBaseOne() override;
		BaseTwo* createBaseTwo() override;
		BaseThree* createBaseThree() override;
	};	
	
}

#endif

