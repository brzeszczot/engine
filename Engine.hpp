#ifndef ENGINE_HPP_INCLUDED
#define ENGINE_HPP_INCLUDED

#include <vector>
#include "Library.hpp"
#include "Object.hpp"
#include "Object2.hpp"
#include "Object3.hpp"

class Engine
{
    public:
        Engine(Library* v_lib);
        virtual ~Engine();
        void run();
        void updateAll();
        void addObj();
        std::vector<View*> *views;
        Library* lib;
    private:
        bool isRunning;
};

#endif // ENGINE_HPP_INCLUDED
