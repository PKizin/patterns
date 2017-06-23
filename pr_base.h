#ifndef PR_BASE_H
#define PR_BASE_H

namespace prototype {	

	class Base {
	public:
		virtual ~Base();
		virtual Base* clone() = 0;
		virtual void info() = 0;
	};
	
}

#endif

