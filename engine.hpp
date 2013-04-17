#ifndef ENGINE_HPP_INCLUDED
#define ENGINE_HPP_INCLUDED

#include <vector>
#include "object.hpp"
#include "object2.hpp"
#include "object3.hpp"
//#include "view.hpp"
class view;
class engine
{
    public:
        engine();
        virtual ~engine();
        std::vector<view*> views;
        int ii;
};

#endif // ENGINE_HPP_INCLUDED
