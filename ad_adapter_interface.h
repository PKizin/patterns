#ifndef AD_ADAPTER_INTERFACE_H
#define AD_ADAPTER_INTERFACE_H

namespace adapter {
	
	class AdapterInterface {
	public:
		virtual ~AdapterInterface();
		virtual void info() = 0;
	};
	
}

#endif

