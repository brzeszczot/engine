#ifndef OBJECT2_HPP_INCLUDED
#define OBJECT2_HPP_INCLUDED

#include <iostream>
#include "Object.hpp"

class Object2: public Object
{
    public:
        Object2();
        virtual ~Object2();
        virtual void draw();
        virtual void update();
};

#endif // OBJECT2_HPP_INCLUDED

