#ifndef PR_POOL_H
#define PR_POOL_H

#include <map>
#include <string>

namespace prototype {
	
	class Base;	
	class Pool {
	public:
		static void insert(Base*, std::string);
		static void erase(std::string);
		static Base* clone(std::string); 
		
	private:
		Pool();
		Pool(const Pool&);
		Pool& operator=(const Pool&);
		
		static Pool* instance();
		
		std::map<std::string, Base*> data;
	};
	
}

#endif

