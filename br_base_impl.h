#ifndef BR_BASE_IMPL_H
#define BR_BASE_IMPL_H

namespace bridge {
	
	class BaseImpl {
	public:
		virtual ~BaseImpl();
		virtual void info1() = 0;
		virtual void info2() = 0;
		virtual void info3() = 0;
	};
	
}

#endif

