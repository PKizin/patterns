#ifndef SI_BASE_H
#define SI_BASE_H

#include <iostream>

namespace singleton {

    class Base {
    public:
        static Base* instance();
        void info();
    private:
        Base() {}
        Base(const Base&);
        Base& operator=(const Base&);
    };

}

#endif

