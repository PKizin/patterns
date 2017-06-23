#ifndef FM_FACTORY_CHILD1_H
#define FM_FACTORY_CHILD1_H

#include "fm_factory_base.h"
#include "fm_base.h"

namespace factory_method {
	
	class FactoryChildOne : public FactoryBase {
	public:
		Base* create() override;
	};
	
}

#endif

