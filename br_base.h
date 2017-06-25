#ifndef BR_BASE_H
#define BR_BASE_H

namespace bridge {
	
	class BaseImpl;
	class Base {
	public:
		Base();
		Base(BaseImpl* imp);
		virtual ~Base();
		virtual void info() = 0;
	protected:
		BaseImpl* impl;
	};
	
}

#endif

