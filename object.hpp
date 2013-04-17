#ifndef OBJECT_HPP_INCLUDED
#define OBJECT_HPP_INCLUDED

#include <iostream>
#include "view.hpp"

class object: public view
{
    public:
        object();
        virtual ~object();
        virtual void draw();
        virtual void update();
};

#endif // OBJECT_HPP_INCLUDED
