#ifndef AD_ADAPTER_H
#define AD_ADAPTER_H

#include "ad_adapter_interface.h"

namespace adapter {
	
	class Base;
	class Adapter : public AdapterInterface {
	public:
		Adapter(Base* bas);
		~Adapter() override;
		void info() override;
	private:
		Base* base = nullptr;
	};
	
}

#endif

