#ifndef FM_FACTORY_CHILD2_H
#define FM_FACTORY_CHILD2_H

#include "fm_factory_base.h"
#include "fm_base.h"

namespace factory_method {
	
	class FactoryChildTwo : public FactoryBase {
	public:
		Base* create() override;
	};
	
}

#endif

