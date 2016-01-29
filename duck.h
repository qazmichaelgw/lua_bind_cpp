#ifndef DUCK_H
#define DUCK_H
#include <iostream>
#include <string>

namespace Fowl{
enum FowlType {
    T_DUCK,
    T_CHICKEN,
};
class Duck{
    public:
        Duck();
        virtual void walk() = 0;
        void quack();

        std::string name;
};
}

#endif 
