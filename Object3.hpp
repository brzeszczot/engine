#ifndef OBJECT3_HPP_INCLUDED
#define OBJECT3_HPP_INCLUDED

#include <iostream>
#include "Object2.hpp"

class Object3: public Object2
{
    public:
        Object3();
        virtual ~Object3();
        virtual void draw();
        virtual void update();
};

#endif // OBJECT3_HPP_INCLUDED

