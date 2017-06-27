#include "main.h"
#include <iostream>

void testSingleton();
void testPrototype();
void testFactoryMethod();
void testAbstractFactory();
void testBridge();
void testDecorator();
void testAdapter();

int main() {
	testSingleton();
	testPrototype();
	testFactoryMethod();
	testAbstractFactory();
	testBridge();
	testDecorator();
	testAdapter();
    return 0;
}

void testSingleton() {
	using namespace singleton;
	
    Base* p;
	
	p = Base::instance();
    p->info();
    
    std::cout << '\n';
}

void testPrototype() {
	using namespace prototype;
	
    Pool::insert(new ChildOne, "prototype_1");
    Pool::insert(new ChildTwo, "prototype_2");
    Pool::insert(new ChildThree, "prototype_3");
    
    Base* p;
    
    p = Pool::clone("prototype_1");
    p->info();
    
    p = Pool::clone("prototype_2");
    p->info();
    
    p = Pool::clone("prototype_3");
    p->info();
    
    std::cout << '\n';
}

void testFactoryMethod() {
	using namespace factory_method;
	
    FactoryBase* f;
    Base* p;
    
    f = new FactoryChildOne;
    p = f->create();
    p->info();
    
    f = new FactoryChildTwo;
    p = f->create();
    p->info();
    
    f = new FactoryChildThree;
    p = f->create();
    p->info();
    
    std::cout << '\n';
}

void testAbstractFactory() {
	using namespace abstract_factory;
        
	FactoryBase* f;
    Collection* c = new Collection;
    
    f = new FactoryChildOne;
    c->create(f);
    c->info();
    
    f = new FactoryChildTwo;
    c->create(f);
    c->info();
	
	std::cout << '\n';
}

void testBridge() {
	using namespace bridge;
	
    Base* p;
    
    p = new ChildOne("impl_1");
    p->info();
    
    p = new ChildTwo("impl_1");
    p->info();
    
    p = new ChildThree("impl_1");
    p->info();
    
    p = new ChildOne("impl_2");
    p->info();
    
    p = new ChildTwo("impl_2");
    p->info();
    
    p = new ChildThree("impl_2");
    p->info();
    
    std::cout << '\n';
}

void testDecorator() {
	using namespace decorator;
	
    Base* p;
    
    p = new ChildOne;
    p->info();
    
    p = new ChildTwo;
    p->info();
    
    p = new ChildThree;
    p->info();
    
    p = new DecoratorChildOne(
		  new ChildOne);
    p->info();
    
    p = new DecoratorChildOne(
		  new ChildTwo);
    p->info();
    
    p = new DecoratorChildOne(
		  new ChildThree);
    p->info();
    
    p = new DecoratorChildTwo(
		  new DecoratorChildOne(
		    new ChildOne));
    p->info();
    
    p = new DecoratorChildTwo(
		  new DecoratorChildOne(
		    new ChildTwo));
    p->info();
    
    p = new DecoratorChildTwo(
		  new DecoratorChildOne(
		    new ChildThree));
    p->info(); 
        
    std::cout << '\n';  
}

void testAdapter() {
	using namespace adapter;
	
    Base* p;
    Adapter* a;
    
    p = new Base;
    p->info();
    
    a = new Adapter(new Base);
    a->info();
	
	std::cout << '\n';
}

