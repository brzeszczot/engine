#ifndef ENGINE_HPP_INCLUDED
#define ENGINE_HPP_INCLUDED

#include <vector>
#include "Object.hpp"
#include "Object2.hpp"
#include "Object3.hpp"
//#include "view.hpp"
//class view;
class Engine
{
    public:
        Engine();
        virtual ~Engine();
        void run();
        void updateAll();
        void addObj();
        std::vector<View*> views;
};

#endif // ENGINE_HPP_INCLUDED
