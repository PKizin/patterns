#ifndef PROTOTYPE_H
#define PROTOTYPE_H

namespace prototype {

	class Base {
	public:
		virtual ~Base();
		virtual Base* clone() = 0;
		virtual void info() = 0;
	};

	class ChildOne : public Base {
	public:
		Base* clone() override;
		void info() override;
	};

	class ChildTwo : public Base {
	public:
		Base* clone() override;
		void info() override;
	};

	class ChildThree : public Base {
	public:
		Base* clone() override;
		void info() override;
	};
	
}

#endif
