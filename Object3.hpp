#ifndef OBJECT3_HPP_INCLUDED
#define OBJECT3_HPP_INCLUDED

#include <iostream>
#include "object2.hpp"

class object3: public object2
{
    public:
        object3();
        virtual ~object3();
        virtual void draw();
        virtual void update();
};

#endif // OBJECT3_HPP_INCLUDED

