#include "pr_pool.h"
#include "pr_base.h"
using namespace prototype;

Pool::Pool() {}

void Pool::insert(Base* prototype, std::string key) {
    if (prototype) {
        auto& data = Pool::instance()->data;
        if (data.find(key) == data.end()) {
            data[key] = prototype;
        }
    }
}

void Pool::erase(std::string key) {
    auto& data = Pool::instance()->data;
    auto prototype = data.find(key);
    if (prototype != data.end()) {
        data.erase(prototype);
    }
}

Base* Pool::clone(std::string key) {
    auto& data = Pool::instance()->data;
    auto prototype = data.find(key);
    if (prototype != data.end()) {
        return (*prototype).second;
    } else {
        return nullptr;
    }
}

Pool* Pool::instance() {
    static Pool pool;
    return &pool;
}

