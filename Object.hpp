#ifndef OBJECT_HPP_INCLUDED
#define OBJECT_HPP_INCLUDED

#include <iostream>
#include "View.hpp"

class Object: public View
{
    public:
        Object();
        virtual ~Object();
        virtual void draw();
        virtual void update();
};

#endif // OBJECT_HPP_INCLUDED
