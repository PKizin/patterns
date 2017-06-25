#include "si_base.h"

#include "pr_child1.h"
#include "pr_child2.h"
#include "pr_child3.h"
#include "pr_pool.h"

#include "fm_child1.h"
#include "fm_child2.h"
#include "fm_child3.h"
#include "fm_factory_child1.h"
#include "fm_factory_child2.h"
#include "fm_factory_child3.h"

#include "af_collection.h"
#include "af_factory_child1.h"
#include "af_factory_child2.h"

#include "br_child1.h"
#include "br_child2.h"
#include "br_child3.h"

int main() {
    {
        using namespace singleton;
        Base* s = Base::instance();
        s->info();
    }
    
    {
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
    }
    
    {
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
    }
    
    {
        using namespace abstract_factory;
        FactoryBase* f;
        Collection* c = new Collection;
        f = new FactoryChildOne;
        c->create(f);
        c->info();
        f = new FactoryChildTwo;
        c->create(f);
        c->info();
    }
    
    {
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
	}
    
    return 0;
}

