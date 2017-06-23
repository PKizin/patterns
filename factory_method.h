#ifndef FACTORY_METHOD_H
#define FACTORY_METHOD_H

#include <iostream>

namespace factory_method {
	
	class Base {
	public:
		virtual ~Base() {}
		virtual void info() = 0;
	};

	class ChildOne : public Base {
	public:
		void info() override {
			std::cout << "child_one\n";
		}
	};

	class ChildTwo : public Base {
	public:
		void info() override {
			std::cout << "child_two\n";
		}
	};

	class ChildThree : public Base {
	public:
		void info() override {
			std::cout << "child_three\n\n";
		}
	};

	class Factory {
	public:
		virtual ~Factory() {}
		virtual Base* create() = 0;
	};

	class FactoryChildOne : public Factory {
	public:
		Base* create() override {
			return new ChildOne();
		}
	};

	class FactoryChildTwo : public Factory {
	public:
		Base* create() override {
			return new ChildTwo();
		}
	};

	class FactoryChildThree : public Factory {
	public:
		Base* create() override {
			return new ChildThree();
		}
	};
	
}

#endif
