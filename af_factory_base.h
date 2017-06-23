#ifndef AF_FACTORY_BASE_H
#define AF_FACTORY_BASE_H

#include "af_base1.h"
#include "af_base2.h"
#include "af_base3.h"

namespace abstract_factory {

	class FactoryBase {
	public:
		virtual ~FactoryBase();
		virtual BaseOne* createBaseOne() = 0;
		virtual BaseTwo* createBaseTwo() = 0;
		virtual BaseThree* createBaseThree() = 0;
	};
	
}

#endif

