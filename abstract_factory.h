#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H

#include <iostream>

namespace abstract_factory {

	class A {
	public:
		virtual ~A() {}
		virtual void info() = 0;
	};
	
		class A1 : public A {
		public:
			void info() override {
				std::cout << "A1 ";
			}
		};
	
		class A2 : public A {
		public:
			void info() override {
				std::cout << "A2 ";
			}
		};
	
	class B {
	public:
		virtual ~B() {}
		virtual void info() = 0;
	};
	
		class B1 : public B {
		public:
			void info() override {
				std::cout << "B1 ";
			}
		};
	
		class B2 : public B {
		public:
			void info() override {
				std::cout << "B2 ";
			}
		};
	
	class C {
	public:
		virtual ~C() {}
		virtual void info() = 0;
	};
	
		class C1 : public C {
		public:
			void info() override {
				std::cout << "C1\n";
			}
		};
	
		class C2 : public C {
		public:
			void info() override {
				std::cout << "C2\n\n";
			}
		};
	
	class Factory {
	public:
		virtual ~Factory() {}
		virtual A* createA() = 0;
		virtual B* createB() = 0;
		virtual C* createC() = 0;
	};
	
	class Factory1 : public Factory {
	public:
		A* createA() override {
			return new A1();
		}
		B* createB() override {
			return new B1();
		}
		C* createC() override {
			return new C1();
		}
	};
	
	class Factory2 : public Factory {
	public:
		A* createA() override {
			return new A2();
		}
		B* createB() override {
			return new B2();
		}
		C* createC() override {
			return new C2();
		}
	};
	
	class Collection {
	public:
		~Collection() {
			this->clear();
		}
		void create(Factory* factory) {
			if (factory) {
				this->clear();
				a = factory->createA();
				b = factory->createB();
				c = factory->createC();
			}
		}
		void clear() {
			if (a) delete a;
			if (b) delete b;
			if (c) delete c;
		}
		void info() {
			if (a) a->info();
			if (b) b->info();
			if (c) c->info();
		}
	private:
		A* a = nullptr;
		B* b = nullptr;
		C* c = nullptr;
	};
	
}

#endif
