#ifndef CHICKEN_H
#define CHICHEN_H
#include <iostream>
#include <string>

namespace Fowl{
class Chicken{
    public:
        Chicken();
        virtual void walk() = 0;
        void crow();

        std::string name;
};
}

#endif 
