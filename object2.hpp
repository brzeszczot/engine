#ifndef OBJECT2_HPP_INCLUDED
#define OBJECT2_HPP_INCLUDED

#include <iostream>
#include "object.hpp"

class object2: public object
{
    public:
        object2();
        virtual ~object2();
        virtual void draw();
        virtual void update();
};

#endif // OBJECT2_HPP_INCLUDED

