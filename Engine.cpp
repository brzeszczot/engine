#include "Engine.hpp"

Engine::Engine()
{
    run();
    addObj();
    updateAll();
}

Engine::~Engine()
{

}

void Engine::run()
{

}

void Engine::addObj()
{
    for(size_t ii=0; ii<15; ii++)
    {
        View* v;

        if(ii<5)
            v = new Object();
        else if(ii<10)
            v = new Object2();
        else
            v = new Object3();

        v->set_engine(this);
        views.push_back(v);
    }
}

void Engine::updateAll()
{
    for(size_t ii=0; ii<views.size(); ii++)
    {
        std::cout << ii << std::endl;
        views[ii]->update();
    }
}
