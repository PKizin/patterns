#ifndef FM_BASE_H
#define FM_BASE_H

namespace factory_method {
	
	class Base {
	public:
		virtual ~Base();
		virtual void info() = 0;
	};
	
}

#endif

