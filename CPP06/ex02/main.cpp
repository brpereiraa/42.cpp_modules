#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base *generate() {
    int random = rand() % 3;
    if (random == 0) {
        std::cout << "Generated A" << std::endl;
        return new A();
    } else if (random == 1) {
        std::cout << "Generated B" << std::endl;
        return new B();
    } else {
        std::cout << "Generated C" << std::endl;
        return new C();
    }
}

void identify(Base *p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "Identified as A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "Identified as B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "Identified as C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

void identify(Base &p) {
    try {
        A &a = dynamic_cast<A&>(p);
        std::cout << "Identified as A" << std::endl;
        (void)a;
    } catch (std::bad_cast &) {}

    try {
        B &b = dynamic_cast<B&>(p);
        std::cout << "Identified as B" << std::endl;
        (void)b;
    } catch (std::bad_cast &) {}

    try {
        C &c = dynamic_cast<C&>(p);
        std::cout << "Identified as C" << std::endl;
        (void)c;
    } catch (std::bad_cast &) {}
}

int main(){
    Base *basePtr = generate();

    identify(basePtr);
    identify(*basePtr);
    delete basePtr;
    return 0;
}