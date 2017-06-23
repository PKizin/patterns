#ifndef FM_FACTORY_CHILD3_H
#define FM_FACTORY_CHILD3_H

#include "fm_factory_base.h"
#include "fm_base.h"

namespace factory_method {
	
	class FactoryChildThree : public FactoryBase {
	public:
		Base* create() override;
	};
	
}

#endif

